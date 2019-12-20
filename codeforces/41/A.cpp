#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<char,long long int> ma,sa;
    vector<long long int> vv;
    map<char,long long int> :: iterator it,ki;

    cin>>s;
cin>>v;
reverse(v.begin(),v.end());
if(s==v){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
    return 0;
}
