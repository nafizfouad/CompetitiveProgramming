#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll i,j,k,a,b,c,d,f,e,n,t;
vector<ll> v,s,vv,ss;
cin>>n;
for(i=1;i<=n;i++){
    cin>>a>>b;
    if(a==b)cout<<0<<endl;
    else{
       if(a>b)swap(a,b);
    for(j=1;;j++){
        a = a+j;
        if(a==b){break;}
        else if(a>b){
            d = a-b;
            if(d%2==0){break;}
        }
    }
    cout<<j<<endl;
    }

}
}
