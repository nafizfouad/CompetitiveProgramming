#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,string> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=n; i++)
    {
      cin>>a>>b;
      if(a%2==1){
        for(j=2;;j++){
            if(a%j==0){break;}
        }
        c = a+j;
        b--;
        b = b*2;
        c = c+b;
        cout<<c<<endl;
      }
      else if(a%2==0){
        b = b*2;
        c = a+b;
        cout<<c<<endl;
      }
    }
}



