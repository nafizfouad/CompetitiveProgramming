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
vector<string> ss,oo,uu,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<string,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>st;
            ss.pb(st);
        }
        for(i=0;i<m;i++){
            cin>>st;
            rr.pb(st);
        }
        for(i=0;i<m+1;i++){
            cin>>a;
            if(i>0)me[rr[i-1]]=a;
            else d=a;
        }
        for(i=0;i<n;i++){
            if(me[ss[i]]==0)e=e+d;
            else e = e+me[ss[i]];
        }
        cout<<e<<endl;
    }

}
