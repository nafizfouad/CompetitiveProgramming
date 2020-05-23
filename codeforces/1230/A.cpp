#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll i,j,k,a,b,c,d,f,e,n,t;
vector<ll> v,s,vv,ss;
cin>>a>>b>>c>>d;
if(a+b == c+d){cout<<"YES"<<endl;}
else if(a+c == b+d){cout<<"YES"<<endl;}
else if(a+d == b+c){cout<<"YES"<<endl;}
else if(a+b+c ==d ){cout<<"YES"<<endl;}
else if(b+c+d ==a ){cout<<"YES"<<endl;}
else if(a+d+c ==b ){cout<<"YES"<<endl;}
else if(a+d+b ==c ){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
}
