#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


    ll k,b,m,q;
    ll c,d,t,i,j,a,n;
    vector<ll> v,s;
    map< pair<ll,ll> ,pair<ll,ll> > ma,sa;
    map< pair<ll,ll> ,pair<ll,ll> > :: iterator it,ki;
    string st,et;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>a;
        v.push_back(a);
    }
    a = abs(1-v[0]);
    for(i=1;i<m;i++){
        if(v[i]>v[i-1]){
            a = a+abs(v[i]-v[i-1]);
            //cout<<abs(v[i]-v[i-1])<<" a "<<endl;
        }
        else if(v[i]<v[i-1]){
           b = (n-v[i-1])+v[i];
           a = a+b;
           //cout<<b<<" b "<<endl;
        }
    }
    cout<<a<<endl;
}
