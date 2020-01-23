#include<bits/stdc++.h>
using namespace std;
int main(){


long long int i,j,k,a,b,c,n,t,m;
vector<long long int> v,s;
cin>>n;
for(i=1;i<=n;i++){
    cin>>a>>b>>c>>t;
    j = 0;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    j = v[2]-v[0];
    j = j+(v[2]-v[1]);
    t = t-j;

    if((t%3==0 && t>0) || t==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    v.clear();
}

}
