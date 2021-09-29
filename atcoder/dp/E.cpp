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

ll mem[102][100005],val[102],we[102];

ll dp(ll i,ll w)
{

    if(w<=0)return 0;
    if(i==n)return 1e18;
    if(mem[i][w]!=-1)return mem[i][w];

    ll a,b,c,d,e;

    a = dp(i+1,w);
    b = dp(i+1,w-val[i])+we[i];

    return mem[i][w] = min(a,b);
}

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>we[i]>>val[i];
        }
        memset(mem,-1,sizeof mem);
        for(i=100000;i>=0;i--){
            c = dp(0,i);
            if(c<=k){cout<<i<<endl;break;}
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
