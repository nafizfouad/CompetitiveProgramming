#include<bits/stdc++.h>
using namespace std;
int main(){

long long int a,b,c,d,n,t,f,i,j,k;
vector<long long int> v,s;
string st,ss;
cin>>t;
for(i=1;i<=t;i++){
    cin>>a>>b;
    if(a%b==0){
        cout<<0<<endl;
    }
    else{
        c = a/b;
        c = b*(c+1);
        cout<<c-a<<endl;
    }
}
}
