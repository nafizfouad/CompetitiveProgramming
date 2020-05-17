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
    cin>>n>>m;
    c = m-1;
    b = n-c;
    b--;
    b = (b*(b+1))/2;
    c = n/m;
    if(n/m==1 && n%m!=0){
        cout<<n%m<<" "<<b<<endl;
    }
    else{
     d = m-(n%m);
     e = m-d;
    d = d*((c*(c-1))/2);
    if(n%m!=0)c++;
    e = e*(c*(c-1))/2;
    e = e+d;
    cout<<e<<" "<<b<<endl;
    }

}
