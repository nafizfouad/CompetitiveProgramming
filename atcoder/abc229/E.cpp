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
#include<iterator>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[200005],hh;
vector<pair<ll,ll> > ss,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll id[200005];
ll root(ll a)
{
    while(a!=id[a])
    {
        id[a] = id[id[a]];
        a = id[a];
    }
    return a;
}

int main()
{
    fast;
    // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            vv[a].pb(b);
        }
        for(i=1;i<=n;i++)id[i]=i;
        v.pb(0);
        for(i=n;i>=2;i--){
            if(vv[i].size()==0)c++;
            else{
                    ma.clear();
                for(j=0;j<vv[i].size();j++){
                    d = root(vv[i][j]);
            ma[d]=1;
                }
                for(auto it= ma.begin();it!=ma.end();it++){
                    a = (*it).first;
                    id[a] = id[i];
                }
                c = c-((ma.size())-1);
            }
            v.pb(c);
        }
        for(i=n-1;i>=0;i--){
            cout<<v[i]<<endl;
        }
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
