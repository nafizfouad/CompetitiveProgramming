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
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
ll ar[300005];
int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>a>>b>>c;
            pp.pb({{a,b},c});
        }
        for(i=1;i<=n;i++)si.insert(i);
        for(i=0;i<m;i++){
            a = pp[i].first.first;
            b = pp[i].first.second;
            c = pp[i].second;
            auto it = si.lower_bound(a);
            while(it!=si.end()){
               d = (*it);
               if(d>b)break;
               if(d!=c)ar[d]=c,v.pb(d);
               it++;
            }
            for(j=0;j<v.size();j++)si.erase(v[j]);
            v.clear();
        }
        for(i=1;i<=n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
