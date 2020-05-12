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
    a=st.size();
    st = "0"+st;
    c = 0;
    v.push_back(-100);
    for(j=1;j+1<=a;j++){
        if(st[j]==st[j+1]){
            c++;
            ma[j]=1;
        }
        v.push_back(c);
      }
    cin>>n;
    for(i=1; i<=n; i++)
    {
      cin>>a>>b;
      c = v[b-1]-v[a];
      if(ma[a]==0)c--;
      cout<<c+1<<endl;
    }
}



