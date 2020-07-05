#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

long long int a,b,c,d,e,n,t,i,j,k;
vector<long long int> v,s;
cin>>n;
for(i=0;i<n;i++){cin>>a;v.push_back(a);}
sort(v.begin(),v.end(),greater<long long int>());
n= n-2;
c=v[0];
    d=n/2;
    for(i=1;i<=d;i++){
    c = c+(v[i]*2);
}
if(n%2==1)c=c+v[d+1];
cout<<c<<endl;
}