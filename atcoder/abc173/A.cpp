#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a;
b = a%1000;
if(b==0)cout<<0<<endl;
else cout<<1000-b<<endl;}