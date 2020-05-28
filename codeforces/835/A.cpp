#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m;
    vector<ll > vv,ss,v,s;
    string st,et;
    map<ll,ll> pa,ea;
    cin>>n>>a>>b>>e>>f;
    c = n*a+2*e;
    d = n*b+2*f;
    if(c<d)cout<<"First"<<endl;
    else if(c>d)cout<<"Second"<<endl;
    else cout<<"Friendship"<<endl;
}
