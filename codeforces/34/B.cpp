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
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    c  = 0;
    for(i=0;i<m;i++){
        if(v[i]<0)c = c+abs(v[i]);
        else break;
    }
    cout<<c<<endl;
}
