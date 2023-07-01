/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 1000000007
#define cl clear()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,vv,v[200005];
vector<pair<ld,ll> > ss,oo,uu,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<string,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

char ch[510][510];
ll vis[510][510];
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
                if(ch[a][b]=='s' && ch[c][d]=='n')
                {
                    q.push({c,d});
                    vis[c][d]=1;
                }
                else if(ch[a][b]=='n' && ch[c][d]=='u')
                {
                    q.push({c,d});
                    vis[c][d]=1;
                }
                else if(ch[a][b]=='u' && ch[c][d]=='k')
                {
                    q.push({c,d});
                    vis[c][d]=1;
                }
                else if(ch[a][b]=='k' && ch[c][d]=='e')
                {
                    q.push({c,d});
                    vis[c][d]=1;
                }
                else if(ch[a][b]=='e' && ch[c][d]=='s')
                {
                    q.push({c,d});
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
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>ch[i][j];
            }
        }
        bfs(0,0,n,m);
        if(ch[0][0]=='s' && vis[n-1][m-1]==1){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

}
