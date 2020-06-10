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
vector<ll > vv,v,s,ss;
ll dd =0;
void recu(ll a,ll b,ll n){

if(a==n){
    if(b%360==0){dd=1;}return;
}
if(dd==1)return;
recu(a+1,b+v[a],n);
recu(a+1,b-v[a],n);
}
int main()
{
    fast();
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
    ld bb,cc,aa;
    string st,et,ft;
    priority_queue<ll > pq,aq,dq;
    map<ll,ll> ma,ta,sa;
    set<ll> se,pe,me;

    c = 0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    recu(0,0,n);
    if(dd==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
