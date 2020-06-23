#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
    vector<ll > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t>>n;
    b = 0;
    c = 0;
    for(i=1;i<=t;i++){
        cin>>a;
        v.pb(a);
        if(i==1)b=a;
        if(i==t)c=a;
    }
   sort(v.begin(),v.end());
   if(n==1)cout<<v[0]<<endl;
   else if(n>=3)cout<<v[t-1]<<endl;
   else {
    cout<<max(b,c)<<endl;
   }

}

