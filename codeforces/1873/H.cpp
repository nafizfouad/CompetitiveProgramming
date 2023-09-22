/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 1000000007
#define mod1 1000000009
#define cl clear()
#define con continue
//#define endl '\n'
#define MAXN 200003
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll color[200006],par[200006],cyclenumber,ar[200006],lv[200006],vl[200006];
vector<vector<ll> > cycles;
vector<ll> graph[200006];

void dfs_cycle(ll u, ll p, ll& cyclenumber)
{
    if (color[u] == 2)
    {
        return;
    }

    if (color[u] == 1)
    {
        v.cl;
        cyclenumber++;

        ll cur = p;
        v.push_back(cur);

        while (cur != u)
        {
            cur = par[cur];
            v.push_back(cur);
        }
        cycles.push_back(v);
        return;
    }
    par[u] = p;

    color[u] = 1;

    for (ll v : graph[u])
    {

        if (v == par[u])
        {
            continue;
        }
        dfs_cycle(v, u, cyclenumber);
    }
    color[u] = 2;
}

void printCycles(ll& cyclenumber)
{

    for (ll i = 0; i < cyclenumber; i++)
    {

        for (ll x : cycles[i])
        {
            //cout<<lv[x]<<" "<<vl[x]<<" "<<x<<endl;
            if(vl[x]<lv[x]){
                f=1;
            }
        }

    }
}

void dfs(ll a,ll b)
{
    de.cl;
    de.pb(a);
    while(de.size()){
            a = de.front();
    de.pop_front();
    ar[a]=1;
    for(auto x:graph[a])
    {
        if(ar[x]==0)
        {
            ar[x]=1;
            if(b==0) lv[x]=lv[a]+1;
            else vl[x]=vl[a]+1;
//           if(b==0) cout<<lv[x]<<" "<<x<<" "<<b<<endl;
//           else cout<<vl[x]<<" "<<x<<" "<<b<<endl;
            de.pb(x);
        }
    }
    }

}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>a>>b;
        for(i=0; i<n; i++)
        {
            cin>>x>>y;
            graph[x].pb(y);
            graph[y].pb(x);
        }
        cyclenumber=0;
        f=0;
        dfs_cycle(1, 0, cyclenumber);
        dfs(a,0);
        for(i=0; i<=n+2; i++)ar[i]=0;
        dfs(b,1);
        printCycles(cyclenumber);
        if(f==1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        cycles.cl;
        for(i=0; i<=n+2; i++)graph[i].cl,ar[i]=0,lv[i]=0,vl[i]=0,color[i]=0,par[i]=0;
    }
}


