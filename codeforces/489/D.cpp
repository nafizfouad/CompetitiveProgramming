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
vector<ll> s,hh,vv,v[3003];
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

ll apa[3003],lv[3003];

void dfs(ll a)
{

    queue<ll> qe;
    qe.push(a);
    while(qe.size())
    {
        d= qe.front();
        qe.pop();
        for(auto x:v[d])
        {
            //cout<<x<<" "<<d<<" "<<apa[d]<<endl;
            if(x!=i)
            {
                lv[x]=lv[d]+1;
                apa[x]=d;
                if(lv[x]==2)
                {
                    if(se[{i,x}])lv[x]--;
                    ma[x]++;
                }
                else if(lv[x]==1)qe.push(x);
            }
        }
    }

}

int main()
{

    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            v[a].pb(b);
            se[ {a,b}]=1;
        }
        for(i=1; i<=n; i++)
        {
            ma.cl;
            me.cl;

            for(j=1; j<=n; j++)lv[j]=0;
            dfs(i);
            for(auto x:ma)
            {
                a = x.second;
                b = (a*(a-1))/2;
                c = c+b;
            }

        }
        cout<<c<<endl;
    }
}
