#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>a>>b;
    v.push_back(a+b+n);
    v.push_back(n*2+a*2);
    v.push_back(n*2+b*2);
    v.push_back(a*2+b*2);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}


