/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 998244353
#define cl clear()
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
vector<ll > s,vv,v[300005];
vector<vector<pair<ll,pair<string,string> > > > ss;
vector<pair<ll,ll> >oo,uu,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,vector<ll> >,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

ll vi[300006],br[300006],cr[300006];

ll bfs(ll a)
{

    ll i,d;
    queue <ll> q;

    q.push(a);
    vi[a] = 1;
    cr[a]=br[a];
    while(q.size()>0)
    {
        d = q.front();
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                vi[v[d][i]]= 1;
                e = cr[d]-1;
                f = br[v[d][i]];
                cr[v[d][i]] = max(e,f);
                q.push(v[d][i]);
            }
        }
        q.pop();
    }

    return f;
}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=2;i<=n;i++){
            cin>>a;
            v[a].pb(i);
            v[i].pb(a);
            br[i]=-1;
            cr[i]=-1;
        }
        br[1]=-1;
        cr[1]=-1;
        for(i=0;i<m;i++){
            cin>>a>>b;
            br[a]= max(br[a],b);
        }
        bfs(1);
        e=0;
        for(i=1;i<=n;i++){
            if(cr[i]>=0)e++;
        }
        cout<<e<<endl;
    }

}
