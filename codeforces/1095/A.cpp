#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll> s,vv,ss,v;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    cin>>st;
    m = 1;
    for(i=0; i<n; i=i+m)
    {
        m++;
        et.push_back(st[i]);
    }
    cout<<et<<endl;
}
