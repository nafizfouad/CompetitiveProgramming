#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll> v,s,vv;
    map<char,ll> ma,sa;
    map<char,ll> :: iterator it,ki;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a;
        a = 2*a;
        double aa;
        aa = 0.5*((cos(pi/a*1.0))/(sin(pi/a*1.0)));
        cout<<fixed<<setprecision(9)<<aa*2<<endl;
    }
}
