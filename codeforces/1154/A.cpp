#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,n,t;
vector<long long int> v,s;
    cin>>a>>b>>c>>t;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(t);
    sort(v.begin(),v.end());
    cout<<v[3]-v[2]<<" ";
    cout<<v[3]-v[1]<<" ";
    cout<<v[3]-v[0]<<endl;
    return 0;
}