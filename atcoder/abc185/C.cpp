#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<set>
#include<string.h>
#include<stdio.h>
#include<math.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

ll dp[205][13],nn;
ll he(ll sum,ll cut)
{

    if(sum<0)return 0;
    if(sum>0 && cut==0)return 0;
    if(sum==0 && cut==0)return 1;
    ll &a = dp[sum][cut];
    if(a!=-1)return a;
    ll cnt=0;
    for(ll j = 1; j<=nn; j++)
    {
        cnt = cnt+he(sum-j,cut-1);
    }
    a = cnt;
    return a;
}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>nn;
    memset(dp,-1,sizeof dp);
    a = he(nn,12);
    cout<<a<<endl;
}
