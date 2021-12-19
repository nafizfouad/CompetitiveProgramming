;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<vector>
#include<map>
#include<functional>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<list>
#include<iterator>
#include<cstring>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[200005],hh;
vector<pair<ll,ll> > ss,pp,rr;
map<string,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;
newset see;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

char ar[102][102];
ll mem[102][102];

ll dp(ll l,ll r)
{
    if(ar[l][r]=='#')return 0;
    if(l>n || r>m)return 0;
    if(mem[l][r]!=-1)return mem[l][r];

    ll c,d;

    c = 1+dp(l+1,r);
    d = 1+dp(l,r+1);

    mem[l][r] = max(c,d);
    return mem[l][r];
}

int main()
{
    fast;
    // cin>>t;
    p = 0;
    while(t--)
    {
        memset(mem,-1,sizeof mem);
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>ar[i][j];
            }
        }
        d = dp(1,1);
        cout<<mem[1][1]<<endl;
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
