#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<iomanip>
#include<string.h>
#include<stdio.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    vector< pair<ll,ll> > ss;
    map<ll,vector<ll> > me;
    map<pair<ll,ll >,ll > pa,ta,sa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m>>x>>y;
    b = m+y;
    a = n*y;
    c = m*x;
    d = a+c;
    aa = (d*1.0)/(b*1.0);

    cout<<fixed<<setprecision(10)<<aa<<endl;
}

