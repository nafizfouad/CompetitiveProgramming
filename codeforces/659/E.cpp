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
vector<ll> v,s,vv[100005],hh;
vector<vector<ll> > ss,pp;
map<pair<ll,ll> ,ll > ta,pa,sa,ma;
map<string, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll>li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll id[100005],vis[100005];
ll root(ll a)
{
    while(a!=id[a])
    {
        id[a] = id[id[a]];
        a = id[a];
    }
    return a;
}
ll kruskal(ll x)
{
    ll  c=0,a,b,e,d;
    queue<ll> qe;
    qe.push(x);
    vis[x] = 1;
    while(qe.size()>0)
    {
        x = qe.front();
        qe.pop();
        for(ll i=0; i<vv[x].size(); i++)
        {
            a = vv[x][i];
            if(vis[a]==0)qe.push(a),vis[a]=1;
            e = root(x);
            d = root(a);
            ma[{a,x}]++;
            if(e!=d)
            {
                id[e] = id[d];
            }
            else if(ma[{x,a}]==0)c=1;
        }
    }
    return c;
}


int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>m;

        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            vv[a].pb(b);
            vv[b].pb(a);
        }
        c = 0;
        for(i=1;i<=n;i++)id[i]=i;
        for(i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                c++;
                d = kruskal(i);
                if(d==1)c--;
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
