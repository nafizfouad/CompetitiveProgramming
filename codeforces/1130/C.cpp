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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv;
vector<pair<ll,ll> > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de[5],ne;
multiset<pair<ll,ll> > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

char ch[110][110];
ll vis[110][110];
ll dx[] = {-1,1,0,0,-1,-1,1,1};
ll dy[] = {0,0,-1,1,-1,1,-1,1};

bool val(ll c,ll d,ll n,ll m)
{

    return (c>=0 && c<n && d>=0 && d<m && vis[c][d]==0);

}

void bfs(ll a,ll b,ll n,ll m,ll k)
{

    queue <pair<ll,ll> > q;
    pair<ll,ll> qu;
    q.push({a,b});
    vis[a][b]= 1;
    if(k==1)ss.pb({a,b});
    if(k==2)pp.pb({a,b});
    while(q.size()!=0)
    {
        for(ll i=0; i<4; i++)
        {
            qu = q.front();
            a = qu.first;
            b = qu.second;
            ll c = a+dx[i];
            ll d = b+dy[i];
            if(val(c,d,n,m))
            {
                if(ch[c][d]!='1')
                {
                    q.push({c,d});
                    if(k==1)ss.pb({c,d});
    if(k==2)pp.pb({c,d});
                    vis[c][d]=1;
                }
            }
        }
        q.pop();
    }
}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>a>>b>>c>>d;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>ch[i][j];
                vis[i][j] = 0;
            }
        }
        bfs(a-1,b-1,n,n,1);
        bfs(c-1,d-1,n,n,2);
        l = 1e18;
        for(i=0;i<ss.size();i++){
            for(j=0;j<pp.size();j++){
             //   cout<<ss[i].first<<" "<<ss[i].second<<" "<<pp[i].first<<" "<<pp[i].second<<endl;
                r = ((ss[i].first-pp[j].first)*(ss[i].first-pp[j].first));
                r += ((ss[i].second-pp[j].second)*(ss[i].second-pp[j].second));
                l = min(l,r);
            }
        }
        cout<<l<<endl;
    }
}
