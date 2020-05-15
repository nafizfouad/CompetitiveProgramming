#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    deque<ll> v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cin>>n;
    a = a+b+c;
    d = d+e+f;
   
    b = a/5; 
    if(a%5!=0)b++;
    c =d/10;
    if(d%10!=0)c++;
    if(b+c<=n){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
}



