;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,heh;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll dp[304][304][304];

ll mem(ll i,ll x,ll y)
{

    if(x<=0 && y<=0)return 0;

    if(i>=n)return 1e18;

    if(x<0)x=0;
    if(y<0)y=0;

    if(dp[i][x][y]!=-1)return dp[i][x][y];

    ll a,b,c;
    c = 1e18;
    a = mem(i+1,x,y);
    b = mem(i+1,x-ss[i].first,y-ss[i].second)+1;
    dp[i][x][y] = min(a,c);
    dp[i][x][y] = min(dp[i][x][y],b);
    return dp[i][x][y];

}

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        cin>>l>>r;
        for(j=1; j<=n; j++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        for(i=0; i<n+2; i++)
        {
            for(j=0; j<l+2; j++)
            {
                for(k=0; k<r+2; k++)
                {
                    dp[i][j][k] = -1;
                }
            }
        }
       d = mem(0,l,r);
        if(d>n)d=-1;
        cout<<d<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
