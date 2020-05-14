#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=12; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<ll>());
    c = 0;
    for(i=0;i<12;i++){
        c = c+v[i];
        if(c>=n)break;
    }
    if(i==12)cout<<-1<<endl;
    else if(n!=0)cout<<i+1<<endl;
    else cout<<0<<endl;
}


