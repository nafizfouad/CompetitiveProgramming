#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

vector<ll> vv[100010];
ll ar[100010], arr[100010];
ll he=0;
void dfs(ll a,ll e,ll m)
{
    if(arr[a]==1)e++;
    else e=0;
    if(e>m)return;
    ll i,j,k,b,c,d;
    ar[a] = 1;
    if( a!=1 && vv[a].size()==1)he++;
    for(i=0; i<vv[a].size(); i++)
    {
        if(ar[vv[a][i]]==0)
        {
            ar[vv[a][i]]==1;
            dfs(vv[a][i],e,m);
        }
    }
}


int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
        ar[i]=0;
    }
    for(i=1; i<n; i++)
    {
        cin>>a>>b;
        vv[a].pb(b);
        vv[b].pb(a);
    }
    dfs(1,0,m);
    cout<<he<<endl;
}
