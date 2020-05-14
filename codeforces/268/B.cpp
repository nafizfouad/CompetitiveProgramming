#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s(100010,0),vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c = 0;
    for(i=1,m=n-1;i<n;i++,m--){
        c = c+(i*m);
    }
    c = c+n;
    cout<<c<<endl;
}


