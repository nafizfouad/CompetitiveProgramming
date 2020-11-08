#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
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
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    f = 0;
    for(i=2; i<=1000; i++)
    {
        c = 0;
        for(j=0; j<n; j++)
        {
            if(v[j]%i==0)c++;
        }
        if(c>=f)d=i,f=c;
    }
    cout<<d<<endl;
}
