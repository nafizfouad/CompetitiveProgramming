#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main(){


ll a,b,c,d,e,f,i,j,k,n,t;
stack<ll> v;
cin>>t;
for(i=0;i<t;i++){
cin>>n;
       
  for(j=1;j<=n;j++){
        v.push(j);
    }
    cout<<2<<endl;
    while(v.size()>=2){
        a = v.top();
        v.pop();
        b = v.top();
        v.pop();
        c = (a+b)/2;
        if((a+b)%2==1)c++;
        v.push(c);
        cout<<b<<" "<<a<<endl;
    }
    while(v.size()>0)v.pop();
}

}