;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv,hh;
vector<vector<ll> > ss,pp;
map<pair<ll,ll >,ll > ta,pa,sa,ma;
map<string, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset< pair<ll,pair<ll,ll> > >li,si;
set< pair<ll,ll> > mi;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);


int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<n;i++){
            cin>>a;
            s.pb(a);
        }
        for(i=1;i<n;i++){
            v[i] = v[i-1]+v[i];
        }
        si.insert({v[n-1],{0,n-1}});
        mi.insert({0,n-1});
        ma[{0,n-1}] = v[n-1];
        for(i=0;i<n;i++){
            a = s[i]-1;
            auto he = mi.lower_bound(make_pair(a,1e16));
            if(he==mi.end())--he;
            else if((*he).first>a)--he;
            l = (*he).first;
            r = (*he).second;
            u = ma[{l,r}];
            mi.erase(he);
            si.erase({u,{l,r}});
            j = a-1;
            k = a+1;
            if(j>=l){
                if(l==0)c = v[j];
                else c = v[j]-v[l-1];
                si.insert({c,{l,j}});
                mi.insert({l,j});
                ma[{l,j}] = c;
            }
            if(k<=r){
                if(k==0)c = v[r];
                else c = v[r]-v[k-1];
                si.insert({c,{k,r}});
                mi.insert({k,r});
                ma[{k,r}] = c;
            }
                auto ki = si.rbegin();
                if(ki!=si.rend())vv.pb((*ki).first);
                else vv.pb(0);
        }
        for(i=0;i<n;i++)cout<<vv[i]<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
