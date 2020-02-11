#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,j,k,a,b,c,d,n,t,s;
    vector<ll> v;
    string st;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>n>>s;
        if(b>=s){
            cout<<"YES"<<endl;
        }
        else{
            d = s/n;
            if(d>a){
                d = a;
            }
            d = d*n;
            if(d+b>=s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
