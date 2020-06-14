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
    map<ll,ll> ma,ta;
    map<ll,ll,greater<ll> >sa;
    set<ll> se,pe,me;
    vector<ll > vv,v,s,ss;


    cin>>x>>n;
    c = 0;
    d = 0;
    f = 0;
    for(i=0;i<n;i++){
       cin>>a;
       ma[a] = 1;
    }

    if(n==0)cout<<x<<endl;
    else{
         auto it = --ma.end();
    b = (*it).first;
    auto ki = ma.begin();
    d = (*ki).first;
    a = 99999999;
    m = 99999999;
      for(i=x;i<=b+1;i++){
        if(ma[i]==0){
            a = abs(x-i);
            c = i;
            break;
        }
    }
    for(i=x-1;i>=d-1;i--){
        if(ma[i]==0){
           // cout<<i<<endl;
            m = abs(x-i);
            e = i;
            break;
        }
    }
    if(a<m)cout<<c<<endl;
    else cout<<e<<endl;
    }

}
