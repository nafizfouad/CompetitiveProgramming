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
    map<string,string> ma,ta;
    map<string,ll> sa;
    map<ll,ll> pa;
    set<ll> se,pe,me;
    vector<pair<string,string> >vv,v,s;
    cin>>n;
    f = 0;
    if(n%2==1){f=1;n++;}
    if(n<=2)cout<<"No"<<endl;
    else if(n%2==0 && (n/2)%2==0){
        cout<<"Yes"<<endl;
        cout<<1<<" "<<2<<endl;
        if(f==1)n--;
        cout<<n-1<<" ";
        for(i=1;i<=n;i++){
            if(i!=2)cout<<i<<" ";
        }
        cout<<endl;
    }
   else if(n%2==0 && (n/2)%2==1){
        cout<<"Yes"<<endl;
        cout<<1<<" "<<n/2<<endl;
        a = n/2;
         if(f==1)n--;
        cout<<n-1<<" ";
        for(i=1;i<=n;i++){
            if(i!=a)cout<<i<<" ";
        }
        cout<<endl;
    }
}
