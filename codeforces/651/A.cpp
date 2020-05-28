#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,c,d,f,e,a,b;
    vector<ll > vv,ss,v,s;
    map<ll,ll> pa,ea;
    queue<ll> q;
    cin>>a>>b;
    c = 0;
if(a==1 && b==1){cout<<0<<endl;return 0;}
    if(a>b)swap(a,b);
    while(1)
    {
        if(b==1 || b==2)swap(a,b);
      //  cout<<a<<" "<<b<<endl;
        a=a+1;
        b = b-2;
        c++;
        if(a<=0 || b<=0)break;
    }
    
     cout<<c<<endl;
}
