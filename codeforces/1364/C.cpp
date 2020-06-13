#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pii acos(-1)
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
    priority_queue<ll,vector<ll>,greater<ll> > pq,aq,dq;
    map<ll,ll> ma,ta,sa;
    set<ll> se,pe,me;
    vector<ll > vv,v,s,ss;

    c = 0;
    d = 0;
    e = 0;
    cin>>n;
    ma.clear();
    for(i=0; i<n; i++)
    {
        cin>>a;
        ma[a] = i;
        sa[a] = i+1;
        ta[a] = i+1;
        v.pb(a);
    }
    e = 0;
    for(i=0; i<=100000; i++)
    {
        if(sa[i]==0)
        {
            s.pb(i);
        }
    }
    m = 0;
    for(auto it =ma.begin(); it!=ma.end(); it++)
    {
        b = (*it).first;
        c = (*it).second;
        // cout<<b<<" "<<c<<endl;
        s.insert(s.begin()+c+1,b);
    }
    f = 0;
    for(auto it =ta.begin(); it!=ta.end(); it++)
    {
        b = (*it).first;
        c = (*it).second;
        if(c<b){f=1;break;}
    }
    if(f==1)cout<<-1<<endl;
    else{
      for(i=0;i<n;i++)cout<<s[i]<<" ";
      cout<<endl;
    }

}
