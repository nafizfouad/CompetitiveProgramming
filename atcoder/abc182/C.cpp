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
    b = n;
    d = 0;
    while(b)
    {
        c = b%10;
        v.pb(c);
        b = b/10;
        ma[c]++;
        d = d+c;
    }
    k = v.size();
    c = 0,e= 0;
    for(i=0; i<v.size(); i++)
    {
        if(v[i]%3==1) c++;
        else if(v[i]%3==2)e++;
    }
    if(d%3==0)cout<<0<<endl;
    else if(d%3==1)
    {
        if(c>=1 && v.size()>1)cout<<1<<endl;
        else if(e>=2 && v.size()>2)cout<<2<<endl;
        else cout<<-1<<endl;
    }
    else if(d%3==2)
    {
        if(e>=1 && v.size()>1)cout<<1<<endl;
        else if(c>=2 && v.size()>2)cout<<2<<endl;
        else cout<<-1<<endl;
    }
}

