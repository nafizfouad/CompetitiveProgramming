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
#include<math.h>
#include<list>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[200005],hh[200005];
vector<string > pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[200005];
void dfs(ll a)
{

    ll i,j,k,b,c;
    ar[a] = 1;
    for(i=0; i<vv[a].size(); i++)
    {
        if(ar[vv[a][i]]==0)
        {
            ar[vv[a][i]]=1;
            dfs(vv[a][i]);
        }
    }
}

int main()
{
    fast;
   // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            for(j=0;j<b;j++){
                cin>>c;
                vv[i+1].pb(c);
            }
            ma[i+1]=a;
        }
        dfs(n);
        c = 0;
        for(i=1;i<=n;i++){
            if(ar[i]==1){
                c = c+ma[i];
            }
        }
        cout<<c<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
