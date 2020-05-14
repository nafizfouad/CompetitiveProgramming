#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--){
       cin>>a>>b>>c;
       v.push_back(a);
       v.push_back(b);
       v.push_back(c);
       sort(v.begin(),v.end());
       n = v[0];
       m = v[1];
       d = v[1]-v[0];
       n=v[0]+d;
       v[2] =v[2]-d;
       v[2]=v[2]/2;
       cout<<v[2]+v[1]<<endl;
       v.clear();
    }

}


