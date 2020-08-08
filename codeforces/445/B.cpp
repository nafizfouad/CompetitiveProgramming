#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

vector<ll> vv[100010];
ll ar[100010];
void dfs(ll a){

ll i,j,k,b,c,d;
ar[a] = 1;
for(i=0;i<vv[a].size();i++){
    if(ar[vv[a][i]]==0){
        ar[vv[a][i]]==1;
        dfs(vv[a][i]);
    }
}
}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    //vector<string> ss,vv,pp;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,list<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
         vv[a].pb(b);
         vv[b].pb(a);
    }
    c = 0;
    for(i=1; i<=n; i++)
    {
        if(ar[i]==0){
        c++;
        dfs(i);
        }
    }
    b= n-c;
    d = 1;
    for(i=1;i<=b;i++){
        d = d*2;
    }
    cout<<d<<endl;
}
