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
    c = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(i>1)
        {
            if(a>b)
            {
                c++;
            }
            else
            {
                v.push_back(c);
                c = 0;
            }
        }
        b = a;
    }
    v.push_back(c);
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]+1<<endl;
}
