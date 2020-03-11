#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


    ll a,b,c,n,d,f,m,x1,x2,y2,y1,x3,x4,y3,y4,s;
    ll i,j,k,t;
    vector<ll> v;
    vector<ll> :: iterator it,ki;
    map<ll,ll>  ma;
    map<ll, pair<ll,ll> >  sa;


    string st;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        v.push_back(a);
        ma[b]++;
    }
    c = 0;
    for(i=0;i<t;i++){
        c = c+ma[v[i]];
    }
    cout<<c<<endl;

    return 0;
}
