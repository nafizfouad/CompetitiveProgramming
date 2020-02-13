#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,n,t,f,a,b,c;
    vector<ll> v(200,0),s;
    string st;
    char m;
    cin>>t;
    f = 0;
    for(i=1;i<=t;i++){
        cin>>a;
        if(a==1){
            f = 1;
        }
    }
    if(f==1){
        cout<<"HARD"<<endl;
    }
else cout<<"EASY"<<endl;
}
