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
vector< pair<pair<ll,ll>, ll> > ss,pp;
map<ll,pair<ll,ll> > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>q;
        c = -1e18;
        for(i=0; i<n; i++)
        {
            cin>>a;
            c = max(c,a);
            de.pb(a);
        }
        for(i=0; i<q; i++)
        {
            cin>>a;
            a--;
            s.pb(a);
        }
        //cout<<"hehe"<<endl;
        for(i=0;; i++)
        {
            a = de.front();
            de.pop_front();
           // cout<<a<<" "<<c<<endl;
            if(a==c)
            {
                   d = i;
                    break;
            }
            b = de.front();
            de.pop_front();
            if(a>b)de.pf(a),de.pb(b),ma[i]= {a,b};
            else de.pf(b),de.pb(a),ma[i]= {a,b};
        }

        for(i=0; i<q; i++)
        {
            //cout<<s[i]%d<<endl;
            if(s[i]<d)cout<<ma[s[i]].first<<" "<<ma[s[i]].second<<endl;
            else cout<<c<<" "<<de[(s[i]-d)%(n-1)]<<endl;
        }
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
