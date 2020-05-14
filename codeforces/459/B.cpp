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
        cin>>a;
        ma[a]++;
    }
    auto it = ma.begin();
    e = (*it).first;
    c=(*it).second;
    it = --ma.end();
    d = (*it).second;
    f = (*it).first;
    if(e==f){
      m = c-1;
      m = (m*(m+1))/2;
    }
    else{m=c*d;}

    cout<<(f-e)<<" "<<m<<endl;
}



