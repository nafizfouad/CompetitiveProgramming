#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,x,y;
    string st,et,ft;
    vector<ll > vv,v,s;
    map<ll,ll > pa,ea,ma;
    long double bb,cc,aa;
    cin>>n;
    a = n/7;
    a = a*2;
    b = a;
    if(n%7==0)
    {
        cout<<a<<" "<<b<<endl;
    }
    else if(n%7==1)
    {
        cout<<a<<" "<<b+1<<endl;
    }
    else if(n%7>=2 && n%7<=5)
    {
        cout<<a<<" "<<b+2<<endl;
    }
    else if(n%7==6){
        cout<<a+1<<" "<<b+2<<endl;
    }
}
