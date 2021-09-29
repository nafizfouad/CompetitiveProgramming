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

ll ar[100002][5],mem[100002][5];

ll dp(ll i,ll j)
{
    if(i==n)return 0;
    if(mem[i][j]!=-1)return mem[i][j];
    ll a,b,c,d,e;
    if(j==0){
        a = max(dp(i+1,1)+ar[i][j],dp(i+1,2)+ar[i][j]);
    }
    else if(j==1){
        a = max(dp(i+1,0)+ar[i][j],dp(i+1,2)+ar[i][j]);
    }
   else if(j==2){
        a = max(dp(i+1,1)+ar[i][j],dp(i+1,0)+ar[i][j]);
    }
    return mem[i][j] = a;
}

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++){
            for(j=0;j<3;j++){
                cin>>ar[i][j];
            }
        }
        memset(mem,-1,sizeof mem);
        c = dp(0,0);
        memset(mem,-1,sizeof mem);
        d = dp(0,1);
        memset(mem,-1,sizeof mem);
        e = dp(0,2);
        cout<<max(max(c,d),e)<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
