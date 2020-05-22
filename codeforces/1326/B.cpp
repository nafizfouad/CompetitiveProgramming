#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<v[0]<<" ";
    ma[v[0]]=1;
    for(i=1;i<n;i++){
        auto it = --ma.end();
        b = (*it).first;
        b = b+v[i];
        cout<<b<<" ";
        ma[b]=1;
    }
    cout<<endl;
}
