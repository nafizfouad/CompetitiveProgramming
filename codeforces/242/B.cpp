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
    map<ll,ll> ma,ta;
    map<string,ll> sa;
    map<pair<ll,ll>,ll>  pa;
    set<ll> se,pe,me;
    ll vv,v[10][10];
    vector<ll> s;
    cin>>n;
    c = 999999999999999;
    d = -99999999999;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        pa[{a,b}]=i;
        if(a<c)c=a;
        if(b>d)d=b;
    }
    f = 0;
    for(auto it=pa.begin();it!=pa.end();it++){
        a = (*it).first.first;
        b = (*it).first.second;
        e = (*it).second;
        if(a<=c && b>=d){f=1;cout<<e<<endl;break;}
    }
    if(f==0)cout<<-1<<endl;
}
