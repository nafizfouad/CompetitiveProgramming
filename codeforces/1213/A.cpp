#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<ll,pair<ll,ll> > ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c= 0;d = 0;
    for(i=0;i<n;i++){
        cin>>a;
        if(a%2==0)c++;
        else d++;
    }
    cout<<min(c,d)<<endl;

}
