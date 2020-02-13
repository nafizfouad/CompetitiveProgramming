#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

ll i,j,k,a,b,c,n,t,f,m,l;
vector<ll> v,s;
string st,vt;
cin>>a>>b>>n;
f  = 0;
for(i=1;;i++){
    if(i%2==1){
        c = __gcd(a,n);
        if(n<c){
            f = 1;break;
        }
        else{
            n = n-c;
        }
    }
    else if(i%2==0){
        c = __gcd(b,n);
        if(n<c){
            f = 2;break;
        }
        else{
            n = n-c;
        }
    }
}
if(f==1){
    cout<<1<<endl;
}
else if(f==2){
    cout<<0<<endl;
}
}
