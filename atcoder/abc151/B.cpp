#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,k,a,b,c,d,f,t,n,m;
  vector<int> v,s;
  cin>>n>>k>>m;
  c = 0;
for(i=1;i<n;i++){
    cin>>b;
    c = c+b;
}
f=0;
for(i=0;i<=k;i++){
    c = c+i;
    d = c/n;
    if(d>=m){
        cout<<i<<endl;
       f = 1; break;
    }
    else {
        c = c-i;
    }
}
if(f==0){
    cout<<-1<<endl;
}
  return 0;
}
