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
vector< pair<pair<ll,ll>,ll> > ss,pp;
map<ll,vector<ll> > ta,pa,sa,ma;
map<ll, set<pair<ll,ll> > >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    // cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            me[b].insert({a,i+1});
        }

        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a;
            si.insert(a);
            ma[a].pb(i+1);
        }
        for(auto it = me.begin(); it!=me.end(); it++)
        {
            a = (*it).first;
            for(auto ki = me[a].rbegin(); ki!=me[a].rend(); ki++)
            {
                ss.pb({{a,(*ki).first},(*ki).second});
            }
        }
        for(i=n-1; i>=0; i--)
        {
            a= ss[i].first.first;
            b = ss[i].first.second;
            e = ss[i].second;
            auto it = si.lower_bound(b);
            if(it!=si.end())
            {
                d++;
                c = c+a;
                auto ki = ma[(*it)].begin();
                pp.pb({{e,(*ki)},0});
                ma[(*it)].erase(ki);
                si.erase(si.find(*it));
            }
        }
        cout<<d<<" "<<c<<endl;
        for(i=0; i<pp.size(); i++)
        {
            cout<<pp[i].first.first<<" "<<pp[i].first.second<<endl;
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
