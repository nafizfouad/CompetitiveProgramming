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
    cin>>st;
    char ch;
    ch = 'a';
    c = 0;
    for(i=0;i<st.size();i++){
      if(abs(st[i]-ch)>12)c=c+(26-abs(st[i]-ch));
      else c = c+abs(st[i]-ch);
      ch = st[i];
    }
    cout<<c<<endl;
}


