#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,c,d,f,e,a,b;
    vector<ll > vv,ss,v,s;
    map<ll,ll> pa,ea;
    queue<ll> q;
    cin>>a;
    for(i=1;i<=a;i++){
        cin>>b;
        v.push_back(b);
    }
    for(i=0;i<a;i++){
       if(v[i]%2==1)cout<<v[i]<<" ";
       else cout<<v[i]-1<<" ";
    }
    cout<<endl;
}
