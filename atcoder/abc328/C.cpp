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
long long int i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv,rr,hh,pp;
vector<pair<ll,ll> > ss;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<char,ll >se,me;
map<pair<ll,ll>,ll >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[300006];

int main()
{
    fast;
    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        cin>>st;
        for(i=0;i<m;i++){
            cin>>a>>b;
            a--;
            b--;
            ss.pb({a,b});
        }
        for(i=0;i+1<n;i++){
            if(st[i]==st[i+1]){
                    while(st[i]==st[i+1]){
                            ar[i+1]++;
                i++;
                if(i==n-1)break;}
            }
        }
        for(i=1;i<n;i++)ar[i]+=ar[i-1];
        for(i=0;i<m;i++){
            a=ss[i].first;
            b=ss[i].second;

                cout<<ar[b]-ar[a]<<endl;
        }
    }
}
