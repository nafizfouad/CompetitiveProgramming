#include<bits/stdc++.h>
using namespace std;
int main(){

long long int i,j,k,a,b,c,n,t;
string s,v;
vector<long long int> ss,vv;
cin>>a;
cin>>s;
n = 0;
for(i=0;i<a-3;i++){
     n = 0;
    b = (s[i]-'A');
    b = abs(b);
    if(b>13){b = 26-b;}
    n = n+b;

    b = (s[i+1]-'C');
    b = abs(b);
    if(b>13){b = 26-b;}
    n = n+b;

    b = (s[i+2]-'T');
    b = abs(b);
    if(b>13){b = 26-b;}
    n = n+b;

    b = (s[i+3]-'G');
    b = abs(b);
    if(b>13){b = 26-b;}
    n = n+b;

    vv.push_back(n);
}
sort(vv.begin(),vv.end());
cout<<vv[0]<<endl;


}