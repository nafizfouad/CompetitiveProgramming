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
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[100005],br[100005];

ll bigmod(ll a,ll b,ll c)
{

    long long int i,j,k;
    if(b==0)
    {
        return 1%c;
    }
    j = bigmod(a,b/2,c);
    j = (j*j)%c;
    if(b%2==1)
    {
        j=(j*a)%c;
    }
    return j;
}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            ss.pb({a,i+1});
        }
        for(i=n-1,j=1;i>=0;j++,i--){
            ar[j]=bigmod(2,i,mod);
            ar[j]=(ar[j-1]+ar[j])%mod;
        }
        sort(ss.begin(),ss.end(),greater<pair<ll,ll>>());
        d=0;
        for(i=0;i<n;i++){
            b = ss[i].second;
            c = 0;
            for(j=1;j*j<=b;j++){
                    if(b%j==0){
                        if(br[j]==0)c++,br[j]=1;
                        if(br[b/j]==0)c++,br[b/j]=1;
                    }
            }
            e = d;
            f = d+c;
            d = f;
            g = (ar[f]-ar[e]+mod)%mod;
            l = (g*ss[i].first)%mod;
            r = (r+l)%mod;
        }
        cout<<r<<endl;
    }
}

