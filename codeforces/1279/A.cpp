#include<bits/stdc++.h>
using namespace std;
int main(){

long long int i,j,k,a,b,c,d,f,sum,t,n,r,g;
string s,v;
vector<long long int> ss,vv;
cin>>t;
for(i=1;i<=t;i++){
    cin>>r>>g>>b;
    vv.push_back(r);
    vv.push_back(g);
    vv.push_back(b);
    sort(vv.begin(),vv.end());
    c = abs(vv[2]-vv[1]);
    d = vv[0]+vv[1];
    d = vv[2] -d;
    if(c>1){
        if(d<=1)cout<<"Yes"<<endl;
        else {cout<<"No"<<endl;}
    }
    else if(c<=1)cout<<"Yes"<<endl;
    vv.clear();
}

return 0;
}
