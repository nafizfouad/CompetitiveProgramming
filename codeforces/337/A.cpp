#include<bits/stdc++.h>
using namespace std;
int main(){

int i,j,k,a,b,c,n,m;
vector<int> v,s;
cin>>n>>m;
for(i=1;i<=m;i++){
    cin>>a;
    v.push_back(a);
}
sort(v.begin(),v.end());
a = n-1;
for(i=0;a<m;i++,a++){
    b = v[a]-v[i];
    s.push_back(b);
}
sort(s.begin(),s.end());
cout<<s[0]<<endl;
return 0;
}
