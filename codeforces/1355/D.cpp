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
    cin>>a>>b;
    c = b/2;
    if(c<a){cout<<"NO"<<endl;}
    else {
        cout<<"YES"<<endl;
        for(i=1;i<a;i++){
            cout<<2<<" ";
        }
        d = b-((a-1)*2);
        cout<<d<<endl;
        cout<<1<<endl;
    }
}
