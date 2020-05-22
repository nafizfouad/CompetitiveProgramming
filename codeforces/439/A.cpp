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
        v.push_back(a);
        c = c+a;
    }
    if((c+((n-1)*10))>m)cout<<-1<<endl;
    else if((c+((n-1)*10))==m)cout<<((n-1)*10)/5<<endl;
    else{
        d = (n-1)*10;
        d = d+(m-(c+((n-1)*10)));
        d = d/5;
        cout<<d<<endl;
    }
}
