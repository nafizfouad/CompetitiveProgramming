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
deque<char> de,ne;
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

void bfs(ll a,ll b,ll n,ll m)
{

    queue <pair<ll,ll> > q;
    pair<ll,ll> qu;
    q.push({a,b});
    vis[a][b]= 1;
    l++;
    ll c,d;
    while(q.size()!=0)
    {
        qu = q.front();
        a = qu.first;
        b = qu.second;

        if(st[a]=='>')
        {
            c = a+dx[3];
            d = b+dy[3];
        }
        else
        {
            c = a+dx[2];
            d = b+dy[2];
        }
      //  cout<<c<<" "<<d<<endl;
        if(val(c,d,n,m))
        {
            q.push({c,d});
            vis[c][d]=1;
            l++;
        }

        if(et[b]=='v')
        {
            c = a+dx[1];
            d = b+dy[1];
        }
        else
        {
            c = a+dx[0];
            d = b+dy[0];
        }
        //cout<<c<<" "<<d<<endl;
        if(val(c,d,n,m))
        {
            q.push({c,d});
            vis[c][d]=1;
            l++;
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
        cin>>n>>m;
        cin>>st;
        cin>>et;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                for(u=0; u<25; u++)
                {
                    for(o=0; o<25; o++)vis[u][o]=0;
                }
                l=0;
                bfs(i,j,n,m);
                if(l!=(n*m))
                {
                   // cout<<i<<" "<<j<<" "<<l<<endl;
                    f=1;
                    break;
                }

            }
            if(f==1)break;
        }
        if(f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
