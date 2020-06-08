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
    map<ll,ll> pa;
    set<ll> se,pe,me;
    vector<pair<string,string> >vv,v,s;
    cin>>n;
    if(n==1)cout<<2<<endl;
    else if(n==2)cout<<3<<endl;
    else{
        aa = sqrt(n);
        if(fmod(aa,2.0)==1.0 || fmod(aa,2.0)==0.0){
            a = aa;
        }
        else{
            a = aa+1;
        }
        c = n/a;
        if(n%a!=0)c++;
        cout<<c+a<<endl;
    }
}
