#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int  main()
{
    ll i,j,k,a,b,c,n,t,d,f,m;
    vector<ll> v,s;
    cin>>t;
    map<ll,ll> ma,sa;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        c=0;
        for(j=1; j<=a; j++)
        {
            cin>>b;
            if(ma[b]==0){
                ma[b]=1;
                c++;
            }
        }
        cout<<c<<endl;
        ma.clear();
    }
}
