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
vector<ll> s,hh,vv,v[10005];
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll vi[10005],ar[10006],cr[10006];

void bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;

    q.push(a);
    vi[a] = 1;
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        f=0;
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                vi[v[d][i]]= 1;
                ar[v[d][i]]=d;
                q.push(v[d][i]);
                f++;
            }
        }
        cr[ar[d]]+=f;
        f = (f*(f-1))/2;
        cr[d]+=f;
        q.pop();
    }
}


int main()
{
    fast;

   // cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i+1<n;i++){
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        bfs(1);
        c=0;
        for(i=1;i<=n;i++){
            c = c+cr[i];
        }
        cout<<c<<endl;
    }
}
