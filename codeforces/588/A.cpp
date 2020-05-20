#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    vector<pair<ll,ll> > v;
    vector<ll> s,vv,ss;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    s.push_back(-100);
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        v.push_back({b,i});
        s.push_back(a);
    }
    sort(v.begin(),v.end());
    d = n+1;
    c = 0;
    e = 0;
    for(i=0; i<v.size(); i++)
    {
        if(v[i].second<d)
        {
            for(j=v[i].second; j<d; j++)
            {
               c = c+(s[j]*v[i].first);
               e++;
            }
            d = v[i].second;
        }
        else if(e==n){break;}
    }
    cout<<c<<endl;
}
