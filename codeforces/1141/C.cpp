#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,vv,s;
    vector<ll> ss[1010];
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n-1; i++)
    {
        cin>>a;
        v.pb(a);
    }
    if(v[0]<0)
    {
        s.pb(n);
        s.pb(n-(abs(v[0])));
        t = s[1];
    }
    else{
        s.pb(n-v[0]);
        s.pb(n);
        t = s[0];
    }
    m = n;
    d = 0;
    for(i=1; i+1<n; i++)
    {
        c = s[i]+v[i];
        s.pb(c);
        m = max(m,c);
        t = min(t,c);
    }
    d= d+(n-m);
    if(t<0)d=d+abs(t)+1;
    for(i=0; i<n; i++)
    {
        s[i]=s[i]+d;
    }
    f = 0;
    for(i=0; i<n; i++)
    {
        ma[s[i]]=1;
        if(s[i]>n || s[i]<=0)f=1;
    }
    if(ma.size()==n && f==0)
    {
        for(i=0; i<n; i++)cout<<s[i]<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
}
