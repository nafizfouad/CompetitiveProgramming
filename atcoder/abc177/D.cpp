#include<iostream>
#include<string>
#include<vector>
#include<map>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

vector<ll> vv[200010];
ll ar[200010];
ll ce = 0;

void dfs(ll a){

ll i,j,k,b,c,d;
ar[a] = 1;
ce++;
for(i=0;i<vv[a].size();i++){
    if(ar[vv[a][i]]==0){
        ar[vv[a][i]]==1;
        dfs(vv[a][i]);
    }
}

}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s;
//    map<ll,vector<ll> > me;
//    map<ll,ll > sa,ta,pa,ma;
//    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
  string st,et,ft,pt,ct;
//    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>a>>b;
        vv[a].pb(b);
        vv[b].pb(a);
    }
    e = 1;
    for(i=1;i<=n;i++){
        if(ar[i]==0){
                dfs(i);
            e = max(e,ce);
            ce = 0;
        }
    }
    cout<<e<<endl;
}
