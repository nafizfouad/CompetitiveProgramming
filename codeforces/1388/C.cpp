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
ll i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v[100005],vv,rr,hh,pp;
vector<pair<pair<ll,ll>,ll> > ss;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<ll,ll >se,me;
map<pair<ll,ll>,ll >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[100005],br[100005],vi[100005],cr[100005],dr[100005];

void dfs(ll a)
{

    ar[a]=1;
    br[a]=vv[a-1];

    for(auto x:v[a])
    {
        if(ar[x]==0)
        {
            dfs(x);
            br[a]+=br[x];
        }
    }


}
ll bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;

    q.push(a);
    vi[a] = 1;

    f=0;

    l = (br[a]+s[a-1])/2;
    x = (abs(br[a]+s[a-1]))%2;
    if(x==1)f=1;
    m = br[a]-l;
    if(l+m!=br[a] || l<0 || m<0)f=1;
    cr[a]=l;
    dr[a]=m;

    while(q.size()>0)
    {
        d = q.front();
        u=0;
        o=0;
        y=0;
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                y++;
                vi[v[d][i]]= 1;
                q.push(v[d][i]);
                p = v[d][i];
                l = (br[p]+s[p-1])/2;
                x = (abs(br[p]+s[p-1]))%2;
    if(x==1)f=1;
                m = br[p]-l;
                if(l+m!=br[p] || l<0 || m<0)f=1;
                o=o+l;
                cr[p]=l;
                dr[p]=m;
                u = u+m;
            }
        }
        if((u+vv[d-1]<dr[d] || o-vv[d-1]>cr[d])){
            //cout<<u<<" "<<dr[d]<<" "<<d<<endl;
            f=1;
        }
        q.pop();
    }
    return f;
}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            vv.pb(a);
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
        }
        for(i=0;i<n-1;i++){
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        dfs(1);
        f=bfs(1);
//        for(i=1;i<=n;i++)cout<<br[i]<<" ";
//        cout<<endl;
        if(f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        vv.cl;
        s.cl;
        for(i=0;i<=n+2;i++)v[i].cl,ar[i]=0,br[i]=0,cr[i]=0,vi[i]=0;
    }
}
