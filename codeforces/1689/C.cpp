#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv[300005],rr;
vector< pair<ll,ll> > pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<ll,deque<ll> >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);\

ll ar[300005],br[300006];

ll dfs(ll a,ll p)
{
    ar[a] = 1, br[a] = 0;
    ll k = 0;
    for(ll i=0; i<vv[a].size(); i++)
    {
        if(vv[a][i]==p)continue;
        dfs(vv[a][i],a);
        k = k+br[vv[a][i]];
        ar[a]+=ar[vv[a][i]];
    }
    for(ll i=0; i<vv[a].size(); i++)
    {
        if(vv[a][i]==p)continue;
        br[a] = max(br[a],k-br[vv[a][i]]+ar[vv[a][i]]-1);
    }
}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        x++;
        for(i=0; i<n-1; i++)
        {
            cin>>a>>b;
            vv[a].pb(b);
            vv[b].pb(a);
        }
        dfs(1,0);

        cout<<br[1]<<endl;
        for(i=0; i<n+2; i++)vv[i].clear(),ar[i]=0,br[i]=0;

    }
}
