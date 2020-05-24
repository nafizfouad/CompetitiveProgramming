#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np,x,y,x1,y2,y1,x2;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>b;
    while(b--){
      cin>>t;
      v.clear();
      s.clear();
    for(i=1;i<=t;i++){
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    m = t-1;
    for(i=0;i<t/2;i++,m--){
        s.push_back(v[m]);
        s.push_back(v[i]);
    }
    if(t%2==1)s.push_back(v[t/2]);
    reverse(s.begin(),s.end());
    for(i=0;i<t;i++)cout<<s[i]<<" ";
    cout<<endl;
    }

}
