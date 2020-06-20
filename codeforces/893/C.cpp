#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
vector<ll> vv[100010];
ll ar[100010];
map<ll,ll> ma;
priority_queue<ll,vector<ll>,greater<ll> > pq,mq;
ll dfs(ll a){

ll i,j,k,b,c,d;
ar[a] = 1;
for(i=0;i<vv[a].size();i++){
    if(ar[vv[a][i]]==0){
        ar[vv[a][i]]==1;
        pq.push(ma[vv[a][i]]);
        dfs(vv[a][i]);
    }
}
return pq.top();
}
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z;
    ld aa,bb,cc;
    vector<ll > v,s;
    map<ll,ll> sa,ta;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        ma[i+1]=a;
    }
    for(i=1;i<=m;i++){
        cin>>a>>b;
        vv[a].pb(b);
        vv[b].pb(a);
    }
    c =0;
    d = 0;
    for(i=1;i<=n;i++){
        if(ar[i]==0){
           pq.push(ma[i]);
           c =  dfs(i);
          // cout<<c<<endl;
           d = d+c;
           pq = mq;
        }
    }
    cout<<d<<endl;
}

