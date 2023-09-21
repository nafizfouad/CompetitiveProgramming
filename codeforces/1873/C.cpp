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
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<string,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
set<pair<ll,ll> > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        n=10;
        char ar[15][15];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        e=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(ar[i][j]=='X'){
                    if(i>4){
                        c = i-4;
                    }
                    else c = 4-i+1;
                    if(j>4){
                        d = j-4;
                    }
                    else d = 4-j+1;
                    if(c==1)c=5;
                    else if(c==2)c=4;
                    else if(c==4)c=2;
                    else if(c==5)c=1;

                    if(d==1)d=5;
                    else if(d==2)d=4;
                    else if(d==4)d=2;
                    else if(d==5)d=1;
                    e = e+min(c,d);
                }
            }
        }
        cout<<e<<endl;
    }
}
