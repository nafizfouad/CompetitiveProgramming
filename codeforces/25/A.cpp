#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,n,t,f,a,b,c;
    vector<ll> v,s;
    string st;
    char m;
    cin>>t;

    for(i=1;i<=t;i++){
        cin>>a;
        if(a%2==0){
            v.push_back(i);
        }
        else{
            s.push_back(i);
        }
    }
    if(v.size()==1){
        cout<<v[0]<<endl;
    }
    else cout<<s[0]<<endl;

}
