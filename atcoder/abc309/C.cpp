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
#define mod 998244353
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
vector<ll > s,vv,v;
vector<vector<pair<ll,pair<string,string> > > > ss;
vector<pair<ll,ll> >oo,uu,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,vector<ll> >,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

char ar[100+3][100+3];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++){
            cin>>a>>b;
            ma[1]+=b;
            ma[a+1]-=b;
            ma[a]+=0;
        }
        for(auto it = ma.begin();it!=ma.end();it++){
            j++;
            if(j>1){
                d = d+(*it).second;
                ma[(*it).first]=d;

            }
            d = (*it).second;
            if(ma[(*it).first]<=m){cout<<(*it).first<<endl;break;}
        }
    }

}
