#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define fo(i0n) for(i=0;i<n;i++)
#define fo(i1n) for(i=1;i<=n;i++)
#define fo(j0n) for(j=0;j<n;j++)
#define fo(j1n) for(j=1;j<=n;j++)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define pf push_front
#define pu push
#define bg begin
#define en end
using namespace std;
int main()
{
    fast();
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
    ld bb,cc,aa;
    string st,et,ft;
    priority_queue<ll > pq,aq,dq;
    map<ll,ll> ma,ta,sa;
    map<ll,ll> pa;
    set<ll> se,pe,me;
    vector<pair<ll,ll> >vv,v,s;
    cin>>n;
c = 0;
 d= 0;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
         c= c+a;
          d= d+b;
          v.push_back({a,b});
    }
    l = abs(c-d);
    b = c;
    e = d;
    m = 0;
    for(i=0; i<n; i++)
    {
       c = c-v[i].first;
       c = c+v[i].second;
       d = d-v[i].second;
       d = d+v[i].first;
       f = abs(c-d);
       if(f>l){l=f;m=i+1;}
       c = b;
       d = e;
    }
    cout<<m<<endl;
}
