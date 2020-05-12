#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<pair<ll,ll> > v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    f  =0;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        if(a!=b)f=1;
    }
if(f==1)cout<<"Happy Alex"<<endl;
else cout<<"Poor Alex"<<endl;
}



