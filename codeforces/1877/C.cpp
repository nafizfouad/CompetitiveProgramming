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

ll ar[100005];

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;
        
        ma.cl;
        if(k>3){cout<<0<<endl;con;}
        if(k==1){cout<<1<<endl;con;}
        if(m==0 && k>1){cout<<0<<endl;con;}
         if(n>=m || n==1){
            if(k==2)cout<<m<<endl;
            else cout<<0<<endl;
         }
         else if(n==2 || n==m/2){
            if(m%2==0){
                if(k==2)cout<<m/2+1<<endl;
                else cout<<m/2-1<<endl;
            }
            else{
                if(k==2)cout<<m/2+1<<endl;
                else cout<<m/2<<endl;
            }
         }
         else{
           if(n>m/2){
                if(k==2)cout<<n<<endl;
                else cout<<m-n<<endl;
            }
            else{
                c = n;
                d = c+(m/n-1);
                if(k==2)cout<<d<<endl;
                else cout<<m-d<<endl;
            }
         }
    }
}

