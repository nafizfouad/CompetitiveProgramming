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
vector<string > ss,pp;
vector<pair<ll,ll> > rr;
map<ll,ll> ta,pa,sa,ma;
map<string,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[200006];

int main()
{
    fast;
    ar[0]=1;
    for(i=1;i<=200000;i++)ar[i]=(i*ar[i-1])%mod;

    cin>>t;

    while(t--)
    {
        cin>>st;
        d=0;
        e=0;
        g=1;
        n=st.size();
        for(i=0;i<n;i++){
            if(st[i]=='0'){
                    c=0;
                while(st[i]=='0'){
                    i++;
                    c++;
                    if(i==n)break;
                }
                i--;
                g = (g*c)%mod;
                e= e+c-1;
            }
            else if(st[i]=='1'){
                    c=0;
                while(st[i]=='1'){
                    i++;
                    c++;
                    if(i==n)break;
                }
                i--;
                g = (g*c)%mod;
                e= e+c-1;
            }
        }
        cout<<e<<" "<<(ar[e]*g)%mod<<endl;
    }
}


