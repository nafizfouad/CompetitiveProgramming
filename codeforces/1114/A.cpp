#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m;
    vector<ll > vv,ss,v,s;
    string st,et;
    map<ll,ll> pa,ea;
    cin>>a>>b>>c;
    cin>>i>>j>>k;
    d = i-a;
    if(d<0)cout<<"No"<<endl;
    else{
        d = d+j;
        if(d<b)cout<<"no"<<endl;
        else{
            d = d-b;
            d = d+k;
            if(d<c)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
