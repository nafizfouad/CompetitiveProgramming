
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

vector<pair<ll,pair<ll,ll> > > vv;
vector<pair<ll,ll> > ss;

ll id[200006];
ll root(ll a)
{
    while(a!=id[a])
    {
        id[a] = id[id[a]];
        a = id[a];
    }
    return a;
}
ll kruskal(ll m)
{
    ll  c=0,a,b,e,d;
    for(ll i=0; i<m; i++)
    {
        a = vv[i].second.first;
        b = vv[i].second.second;
        e = root(a);
        d = root(b);
        if(e!=d)
        {
            id[e] = id[d];
            ss.pb({a,b});
        }
        else if(vv[i].first>=0)c = c+vv[i].first;
    }
    return c;
}
int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b>>c; /// u,v,weight
        vv.pb({c,{a,b}});
    }
    for(i=1;i<=n;i++)id[i]=i;
    sort(vv.begin(),vv.end());
    a = kruskal(m);

    cout<<a<<endl; ///total weight
}
