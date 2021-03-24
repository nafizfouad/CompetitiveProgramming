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
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s;
vector<vector<ll> > vv,ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll> me,he,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[100105];

void sieve()
{

    for(i=4; i<=100100; i=i+2)
    {
        ar[i]=1;
    }
    for(i=3; i*i<=100100; i=i+2)
    {
        if(ar[i]==0)
        {
            for(j=i*i; j<=100100; j=j+(2*i))
            {
                ar[j] = 1;
            }
        }
    }
    for(i=2; i<=100100; i++)
    {
        if(ar[i]==0)v.pb(i);
    }

}


int main()
{
    fast;
    sieve();
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        ll br[505][505];
        for(i=0;i<n;i++){
           for(j=0;j<m;j++){
            cin>>br[i][j];
           }
        }
        d  = 1e18;
        for(i=0;i<n;i++){
                c = 0;
           for(j=0;j<m;j++){
            auto it = lower_bound(v.begin(),v.end(),br[i][j]);
                 c = c+((*it)-br[i][j]);
           }
           d = min(d,c);
        }
        for(i=0;i<m;i++){
                c = 0;
           for(j=0;j<n;j++){
            auto it = lower_bound(v.begin(),v.end(),br[j][i]);
                 c = c+((*it)-br[j][i]);
           }
           d = min(d,c);
        }
        cout<<d<<endl;
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
