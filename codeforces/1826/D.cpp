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
ll i,j,c,k,a,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<pair<ll,ll>,ll> > ss,pp;
map<ll,pair<ll,ll> > ta,pa,sa,ma;
map<string,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>c;
            v.pb(c);
        }
        c=-1e18;
        for(i=0;i<n;i++){
            a = v[i]+i;
            c = max(c,a);
            vv.pb(c);
        }
        c=-1e18;
        for(i=n-1;i>=0;i--){
            a = v[i]-i;
            c = max(c,a);
            hh.pb(c);
        }
        reverse(hh.begin(),hh.end());
        c=-1e18;
        for(i=1;i+1<n;i++){
            a = v[i]+vv[i-1]+hh[i+1];
            c = max(a,c);
        }
        cout<<c<<endl;
        v.cl;
        vv.cl;
        hh.cl;
    }
}
