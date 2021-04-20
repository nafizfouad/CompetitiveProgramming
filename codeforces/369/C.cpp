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
vector<ll > v[100005],s,vv;
vector<vector<ll> > ss,pp;
map<ll,ll > ta,sa,ma;
map<pair<ll,ll>,ll > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct,mt,gt;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[100010],pa[100010];
ll dfs(ll a)
{

    ll i,j,k,b,d;
    ar[a] = 1;
    pa[a] = ma[a];
    for(i=0; i<v[a].size(); i++)
    {
        if(ar[v[a][i]]==0)
        {
            ar[v[a][i]]=1;
            dfs(v[a][i]);
            pa[a] += pa[v[a][i]];
        }
    }
}

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {

        cin>>n;
        for(i=0; i<n-1; i++)
        {
            cin>>a>>b>>c;
            v[a].pb(b);
            v[b].pb(a);
            if(c==2)
            {
                me[ {a,b}]=1;
                me[ {b,a}]=1;
                ma[a]=1;
                ma[b]=1;
            }

        }
        c = 0;
        for(i=1;i<=n+5;i++){
            pa[i]=1;
        }
        dfs(1);
        for(i=1;i<=n;i++){if(pa[i]==1 && ma[i]==1)vv.pb(i);}
        cout<<vv.size()<<endl;
        for(i=0; i<vv.size(); i++)cout<<vv[i]<<" ";
        cout<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
