#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,a,b,c,f,n,t,d,m;
    vector<ll> v,s;
    vector<ll> :: iterator it;
    string st,et;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>n>>m;
        b = 0;
        for(j=1; j<=n; j++)
        {
            cin>>a;
              
                b = b+a;

        }
        if(b<m){
      cout<<b<<endl;
    }
    else{
      cout<<m<<endl;
    }

    }
}
