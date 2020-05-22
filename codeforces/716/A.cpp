#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>c;
    e = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(i>1)
        {
            d = a-b;
            if(d<=c)e++;
            else{e=0;}
        }
        b = a;
    }
    cout<<e+1<<endl;
}
