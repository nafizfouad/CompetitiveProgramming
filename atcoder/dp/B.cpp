;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>newset;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,vv,v,hh;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[100006];

ll dp(ll i)
{
    if(i>=n)return 0;
    if(ar[i]!=-1)return ar[i];
    ll a,c,d,j,u;
    if(i==n-1) a= 0;
    else a= 1e18;
    for( j=i+1, u=1; u<=k && j<n; j++,u++)
    {

        d = abs(v[i]-v[j]);
        //cout<<j<<" "<<i<<endl;
        c = dp(j);
        d = d+c;

        a = min(d,a);
        //cout<<d<<" "<<c<<" "<<i<<" "<<j<<" "<<a<<endl;
    }
   // cout<<i<<" "<<a<<endl;
    ar[i] = a;
    return ar[i];
}

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)cin>>a,v.pb(a);
        for(i=0; i<=k+5; i++)v.pb(0);
        memset(ar,-1,sizeof ar);
        cout<<dp(0)<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
