#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

vector<ll> vv[1000010],ss;
ll ar[1000010];
map<ll,ll> ma;
ll cc=1;
priority_queue<ll,vector<ll>,greater<ll> > pq,mq;
ll dfs(ll a,ll b)
{
    ll i,j,k,c,d;
      ar[a] = 1;
      if(ma[a]==0){
        ma[a]=1;
        if(a<=b)ss.pb(a);
      }
    for(i=0; i<vv[a].size(); i++)
    {
        if(ar[vv[a][i]]==0)
        {
            ar[vv[a][i]]==1;
if(ma[vv[a][i]]==0){ma[vv[a][i]]=1;if(vv[a][i]<=b){ss.pb(vv[a][i]);}}
            if(vv[a][i]<=b){cc++;}
            dfs(vv[a][i],b);
        }
    }
    return cc;
}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v;
    vector<ll> s[1010];
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>t;
        for(j=1; j<=t; j++)
        {
            cin>>a;
            vv[a].pb(i+n);
            vv[i+n].pb(a);
        }

    }
    for(j=1; j<=n; j++)
    {
        if(ma[j]==0)
        {
          cc = 1;
           c = dfs(j,n);
          for(k=0;k<ss.size();k++){
            ma[ss[k]]=c;
          }
          ss.clear();
        }
        cout<<ma[j]<<" ";
    }
    cout<<endl;
}
