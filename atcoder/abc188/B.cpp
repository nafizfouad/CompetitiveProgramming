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
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o,mi;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    c = 0;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    for(i=0;i<n;i++){
        cin>>a;
        s.pb(a);
    }
    for(i=0;i<n;i++){
        c = c+(v[i]*s[i]);
    }
    if(c==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
