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

ll vi[300005],lv[300005];

void bfs(ll a)
{

    ll i,d;
    queue <ll> q;

    q.push(a);
    vi[a] = 1;
    while(q.size()>0)
    {
        d = q.front();
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                vi[v[d][i]]= 1;
                lv[v[d][i]]=lv[d]+1;
                e = max(e,lv[v[d][i]]);
                q.push(v[d][i]);
            }
        }
        q.pop();
    }
}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>l>>m;
        for(i=1; i<=m; i++)
        {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        lv[1]=1;
        lv[n+l]=1;
        e=1;
        bfs(1);
        d=e;
        e=1;
        bfs(n+l);
        d=d+e;
        cout<<d-1<<endl;
    }

}
