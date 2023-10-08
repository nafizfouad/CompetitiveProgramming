/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 998244353
#define mod1 1000000009
#define cl clear()
#define con continue
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
vector<ll> s,hh,vv,v[200005];
vector<pair<pair<ll,ll>,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[200005],br[200005],cr[200005],dr[200005];

void dfs(ll a) {

    ar[a]=1;
    if(ma[a]==1)br[a]=0;
    else br[a]=1e18;
    ll c=1e18;
    for(auto x:v[a]) {
        if(ar[x]==0){
            dfs(x);
            c = min(c,br[x]);
        }
    }
    br[a]=min(br[a],c+1);
   // cout<<a<<" l "<<br[a]<<endl;
}
void bfs(ll a) {

    cr[a]=1;
    de.pb(a);
    while(de.size()){
        d = de[0];
        de.pop_front();
        for(i=0;i<v[d].size();i++){
            if(cr[v[d][i]]==0){
                    cr[v[d][i]]=1;
                dr[v[d][i]]=dr[d]+1;
                if(dr[v[d][i]]<br[v[d][i]])de.pb(v[d][i]),sa[v[d][i]]=1;
            }
        }
    }

}

int main() {
    fast;

    cin>>t;

    while(t--) {
        cin>>n>>m;
        for(i=0; i<m; i++) {
            cin>>a;
            ma[a]=1;
        }
        for(i=0; i<n-1; i++) {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }

        dfs(1);
        bfs(1);
        f=0;
        for(auto x:sa){

            if(v[x.first].size()==1)f=1;
        }
        if(f==1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        for(i=0;i<=n+2;i++){
            ar[i]=0;
            br[i]=0;
            cr[i]=0;
            dr[i]=0;
            v[i].cl;
        }
        ma.cl;
        sa.cl;
    }
}
