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
    cin>>n>>m>>t;
    d = n;
    for(i=0;i<m;i++){
        cin>>a>>b;
        if(i==0)n = n-a;
        else n = n-(a-c);
        if(n<=0)break;
        n = n+(b-a);
        if(n>d)n=d;
        c = b;
    }
    n = n-(t-b);
    if(n<=0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
