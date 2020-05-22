#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<pair<ll,ll> > s,vv,ss,v;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    e = 0;
    vector<pair<ll,ll> > nn(n+10);
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    b = abs(v[0].first-v[1].first);
    c = abs(v[0].first-v[n-1].first);
    d = v[0].second;
    nn[d] = {b,c};
    for(i=1; i<n; i++)
    {
        b = abs(v[i].first-v[i+1].first);
        d = abs(v[i].first-v[i-1].first);
        b = min(b,d);
        c = abs(v[i].first-v[n-1].first);
        e = abs(v[i].first-v[0].first);
        c = max(c,e);
        d = v[i].second;
        nn[d] = {b,c};
    }
    for(i=1; i<=n; i++)
    {
        cout<<nn[i].first<<" "<<nn[i].second<<endl;
    }
}
