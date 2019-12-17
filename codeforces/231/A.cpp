#include<bits/stdc++.h>
using namespace std;
int main(){


long long int i,j,k,a,b,c,d,n,t;
vector<long long int> v,s;
cin>>t;
d = 0;
for(i=0;i<t;i++){
    cin>>a>>b>>c;
    if(a+b+c>=2){
      d++;
    }

}
cout<<d<<endl;
return 0;
}
