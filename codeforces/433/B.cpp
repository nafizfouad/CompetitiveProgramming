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
    set<ll> se,pe,me;
    vector<ll> vv,v,s,ss;

    cin>>n;
    c = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a);
        c= c+a;
        ma[i] = c;
    }
    sort(v.begin(),v.end());
    c = 0;
    sa[0] = 0;
    ma[0] = 0;
    for(i=0; i<n; i++)
    {
        c= c+v[i];
        sa[i+1] = c;
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b>>c;
        if(a==2){
            cout<<sa[c]-sa[b-1]<<endl;
        }
        else{
            cout<<ma[c]-ma[b-1]<<endl;
        }
    }
}
