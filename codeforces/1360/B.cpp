#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c=0;
    d = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        for(j=0;j<a;j++){
            cin>>b;
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        m = 99999999999999;
        for(j=0;j+1<a;j++){
            c = abs(v[j]-v[j+1]);
            if(c<m){m=c;}
        }
        cout<<m<<endl;
        v.clear();
    }
}
