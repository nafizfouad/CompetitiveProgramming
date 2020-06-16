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
    map<char,ll> ma,ta;
    map<ll,ll >sa;
    set<ll> se,pe,me;
    vector<ll> vv,v,s,ss;
    vector<pair<ll,pair<ll,ll> > > vec;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0; i<n; i++)
    {
        cin>>a;
        s.pb(a);
    }
    for(i=0; i<n; i++)
    {
        b = s[i]-v[i];
        vec.pb({b,{v[i],s[i]}});
    }
    sort(vec.begin(),vec.end());
    c = 0;
    for(i=n-1,j=1;j<=k;j++,i--){
        c = c+vec[i].second.first;
    }
    for(j=i;j>=0;j--){
    if(vec[j].second.first<vec[j].second.second){c = c+vec[j].second.first;}
    else {c = c+vec[j].second.second;}
    }
    cout<<c<<endl;
}
