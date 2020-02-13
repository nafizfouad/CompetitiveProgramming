#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

ll i,j,k,a,b,c,n,t,f,m,l;
vector<ll> v,s;
string st,vt;
cin>>n;
int e=0,o=0,su=0;
for(i=1;i<=n;i++){
    cin>>a;
    if(a%2==0){
        e++;
    }
    else if(a%2==1){
        o++;
    }
    su = su+a;
}
t = 0;
if(su%2==0){
    if(e>0){
        cout<<e<<endl;
    }
    else {
        cout<<0<<endl;
    }
}
else{
  if(o>0){
    cout<<o<<endl;
  }
  else {
    cout<<0<<endl;
  }
}
}