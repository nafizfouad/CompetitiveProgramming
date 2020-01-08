#include<bits/stdc++.h>
using namespace std;
int main(){

int i,j,k,a,b,c,n,t;
string ss,vv;
cin>>t;
cin>>vv;
a = 0;
b = 0;
for(i=0;i<vv.size();i++){
  if(vv[i]=='x'){
      a = 0;
    while(vv[i]=='x'){
      a++;
      i++;
      if(i==vv.size()){break;}
    }
    if(a>2){b = b+abs(a-2);}
  }
}
cout<<b<<endl;
return 0;
}
