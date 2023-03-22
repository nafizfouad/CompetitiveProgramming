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
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh,vv,v[200004];
vector<pair<ll,ll> > pp,ss;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll vi[200005], id[200004];


ll root(ll a)
{
    while(a!=id[a])
    {
        id[a] = id[id[a]];
        a = id[a];
    }
    return a;
}

ll bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;

    q.push(a);
    vi[a] = 1;
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        l = root(d);
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                vi[v[d][i]]= 1;
                m = root(v[d][i]);
                if(l!=m){
                    q.push(v[d][i]);
                    id[m] = id[l];
                    ss.pb({d,v[d][i]});
                }
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
       for(i=0;i<m;i++){
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
        ma[a]++;
        ma[b]++;
        if(ma[a]>c)c=ma[a],d=a;
        if(ma[b]>c)c=ma[b],d=b;
       }

       for(i=1;i<=n;i++)id[i]=i;
       bfs(d);
       for(i=0;i<ss.size();i++)cout<<ss[i].first<<" "<<ss[i].second<<endl;

    }

}
