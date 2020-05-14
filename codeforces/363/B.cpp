#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    vector<ll> v,s,vv,ss;
    map<string,string> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    c = 0;d=999999999999;
    for(i=0;i<k;i++){
         c= c+v[i];
    }
    f =0;
    if(c<d){d=c;e=1;f=1;}
    for(i=k,m=0;i<n;i++,m++){
        c = c+v[i];
        c = c-v[m];
        //cout<<i<<" "<<m<<" "<<c<<endl;
        if(c<d){d=c;e=m+1;f++;}
    }
    if(f>1)cout<<e+1<<endl;
    else cout<<1<<endl;
}



