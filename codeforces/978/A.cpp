#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<iterator>
using namespace std;
int main(){


int i,j,k,a,b,c,d,f,e,n,t;
n = 1010;
vector<int> v,s;
vector<int> ma(n);
cin>>n;
for(i=0;i<ma.size();i++){
    ma[i] = 0;
}
for(i=1;i<=n;i++){
    cin>>a;
    v.push_back(a);
}

for(j=v.size()-1;j>=0;j--){
    if(ma[v[j]]==0){
      ma[v[j]]= 1;
      s.push_back(v[j]);
    }

}
reverse(s.begin(),s.end());
cout<<s.size()<<endl;
for(j=0;j<s.size();j++){
    cout<<s[j]<<" ";
}
return 0;
}