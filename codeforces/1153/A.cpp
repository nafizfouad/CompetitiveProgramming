#include<bits/stdc++.h>
using namespace std;
int main(){
long long int i,j,k,a,b,c,n,t;
string s,v;
vector<pair<long long int,long long int> > ss,vv;
cin>>t>>n;
for(i=1;i<=t;i++){
    cin>>a>>b;
    vv.push_back({a,b});
    if(a>=n){
        ss.push_back({a,i});
    }
}
for(i=0;i<t;i++){
    if(vv[i].first<n){
        b = n-vv[i].first;
        c = b%vv[i].second;
        if(c==0){
            ss.push_back({n,i+1});
        }
        else {
            c = b/vv[i].second;
            c = (vv[i].second)*(c+1);
            ss.push_back({((vv[i].first)+c),i+1});
        }
    }
}
sort(ss.begin(),ss.end());
cout<<ss[0].second<<endl;
}