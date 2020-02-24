#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll i,j,k,a,b,c,d,f,n,t;
vector<ll> v,s;
string st,et;
cin>>t;
for(i=1;i<=t;i++){
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }
    else if(a<b){
      d = b-a;
      if(d%2==1){
        cout<<1<<endl;
      }
      else if(d%2==0){
        cout<<2<<endl;
      }
    }
    else if(a>b){
        d = a-b;
        if(d%2==0){
          cout<<1<<endl;
        }
        else if(d%2==1){
            cout<<2<<endl;
        }
    }
}



}
