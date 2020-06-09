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
    vector<ll> vv,v,s,ss;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    if(k==n)cout<<v[v.size()-1]<<endl;
    else if(k==0 && v[0]>1)cout<<v[0]-1<<endl;
    else if(k==0 && v[0]<=1)cout<<-1<<endl;
    else{
        b = v[k-1];
        if(v[k]>b){
            cout<<b<<endl;
        }
        else cout<<-1<<endl;
    }
}
