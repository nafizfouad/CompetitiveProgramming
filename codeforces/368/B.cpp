#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s(100010,0),vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>t>>n;
    v.push_back(100);
    s.push_back(100);
    for(i=1;i<=t;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    b = 0;
    for(i=t; i>=1; i--)
    {
       if(ma[v[i]]==0){b++;s[i]=b;ma[v[i]]=1;}
       else{s[i]=b;}
    }
    while(n--)
    {
        cin>>b;
        cout<<s[b]<<endl;
    }
}


