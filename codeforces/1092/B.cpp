#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll i,j,k,a,b,c,d,f,e,n,t;
vector<ll> v,s,vv,ss;
cin>>n;
f=0;
b=0;
c=0;
d=0;
for(i=1;i<=n;i++){
    cin>>a;
    v.push_back(a);
}
sort(v.begin(),v.end());
for(i=0;i<n;i=i+2){
    c = c+abs(v[i]-v[i+1]);
}
cout<<c<<endl;
}
