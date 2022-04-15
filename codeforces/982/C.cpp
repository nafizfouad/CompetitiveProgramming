#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 32000
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
vector<ll> s,hh,vv,v[100006];
vector<vector<ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll dfs(ll aaa,ll bbb)
{

    ll c=1;
    for(ll i=0; i<v[aaa].size(); i++)
    {
        if(v[aaa][i]!=bbb)
        {
            c = c+dfs(v[aaa][i],aaa);
        }
    }
    if(c%2==0)d++;
    return c;
}

int main()
{
    fast;
    //  cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i+1<n; i++)
        {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        e = dfs(1,0);
        if(n%2==1)cout<<-1<<endl;
       else cout<<d-1<<endl;
    }

}
