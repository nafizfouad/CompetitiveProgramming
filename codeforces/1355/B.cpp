#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    deque<ll> v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        ma.clear();
        for(j=1;j<=n;j++){
            cin>>a;
            ma[a]++;
        }
        e = 0;
        d = 0;
        for(auto it = ma.begin();it!=ma.end();it++){
           b = (*it).first;
           c = (*it).second+e;
           d = d+c/b;
           e = c%b;
        }
        cout<<d<<endl;
    }
}



