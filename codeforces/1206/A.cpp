#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>a;
        s.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(s.begin(),s.end());
    cout<<v[n-1]<<" "<<s[m-1]<<endl;
}
