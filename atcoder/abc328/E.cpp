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
vector<ll> s,v,vv,rr,hh,pp;
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

ll id[10];
ll root(ll a)
{
    while(a!=id[a])
    {
        id[a] = id[id[a]];
        a = id[a];
    }
    return a;
}
ll kruskal(ll x)
{
    ll  c=0,a,b,e,d;
    for(ll i=0; i<ii[x].size(); i++)
    {
        ll p = ii[x][i];
        a = ss[p].first.first;
        b = ss[p].first.second;
        e = root(a);
        d = root(b);
        if(e!=d)
        {
            c = c+ss[p].second;
            id[e] = id[d];
        }
        else {c=-1;break;}
    }
    return c;
}

void combinationUtil(vector<ll> &s,ll start, ll end,
                    ll index, ll r)
{
    if (index == r)
    {
        ii.pb(s);
        return;
    }

    for (int i = start; i <= end &&
        end - i + 1 >= r - index; i++)
    {
        s[index] = v[i];
        combinationUtil(s,i+1, end, index+1, r);
    }
}

int main()
{
    fast;
    //cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;
        for(i=0;i<m;i++){
            cin>>a>>b>>c;
            ss.pb({{a,b},c});
        }
        for(i=1;i<=m;i++)v.pb(i-1);
        for(i=1;i<n;i++)s.pb(0);
        combinationUtil(s,0,m-1,0,n-1);
        l=1e18;
        for(i=0;i<ii.size();i++){

            for(j=1;j<=n;j++)id[j]=j;
            d=kruskal(i);
            
            if(d!=-1){
                l = min(l,d%k);
            }
        }
        cout<<l<<endl;
    }
}
