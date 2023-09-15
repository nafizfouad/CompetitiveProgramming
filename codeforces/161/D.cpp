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
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v[50006];
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[50005],lv[50005][505];

void dfs(ll a)
{

    ar[a]=1;
    lv[a][0]=1;
    for(auto x: v[a])
    {
        if(ar[x]==0)
        {

            dfs(x);
            for(j=0;j<k;j++){
                l += lv[x][j]*lv[a][k-j-1];
            }
            for(ll j=0; j<=501; j++)
            {
                lv[a][j+1]+=lv[x][j];
            }

        }
    }
}

int main()
{
    fast;

    // cin>>t;

    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n-1; i++)
        {
            cin>>a>>b;
            a--,b--;
            v[a].pb(b);
            v[b].pb(a);
        }
        dfs(0);

        cout<<l<<endl;

    }
}

