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
    cin>>m;
    c=0;
    d = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(i==0)v.push_back(a);
        if(i>0)
        {
            c = a+b;
            if(c<m)
            {
                d = d+(m-c);
                a = a+m-c;v.push_back(a);
            }
            else v.push_back(a);
        }
        b = a;
    }
    cout<<d<<endl;
    for(i=0; i<n; i++)cout<<v[i]<<" ";
    cout<<endl;
}
