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
    if(a==25)b++;
    else if(a==50){
        if(b>0){b--;c++;}
        else f=1;
    }
    else if(a==100){
        if(b>0 && c>0){b--;c--;d++;}
        else if(b>2)b=b-3;
        else f=1;
    }
}
if(f==1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
