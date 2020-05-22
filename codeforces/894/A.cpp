#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll> s,vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>st;
    b = 0;
    c = 0;
    f = 0;
    d= 0;
    vector<ll> ki(st.size()+10);
    for(i=st.size()-1; i>=0; i--)
    {
        if(st[i]=='Q')
        {
            b++;
            v.push_back(i);
        }
        else if(st[i]=='A')ki[i] = b;
    }
    sort(v.begin(),v.end());
    d = 0;
    for(i=0; i<v.size(); i++)
    {
        for(j=v[i]; j<=v[v.size()-1]; j++)
        {
            if(ki[j]!=0)
            {
                d=d+ki[j];
            }
        }
    }
    cout<<d<<endl;
}
