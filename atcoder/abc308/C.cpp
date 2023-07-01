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
vector<pair<ld,ll> > ss,oo,uu,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<string,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

bool comp(pair<ld,ll> &a, pair<ld,ll> &b){

if(a.first!=b.first)return a.first>b.first;
else return a.second<b.second;


}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            bb = a*1.0;
            cc = b*1.0;
            aa = bb/(bb+cc);
            ss.pb({aa,i+1});
        }
        sort(ss.begin(),ss.end(),comp);
        for(i=0;i<ss.size();i++){
            cout<<ss[i].second<<" ";
        }
        cout<<endl;
    }

}
