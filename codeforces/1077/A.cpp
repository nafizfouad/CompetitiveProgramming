#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    vector<ll> v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(c%2==1){
            d = a*((c/2)+1);
            e = b*(c/2);
            cout<<d-e<<endl;
        }
        else if(c%2==0){
            d = a*(c/2);
            e = b*(c/2);
            cout<<d-e<<endl;
        }
    }
}
