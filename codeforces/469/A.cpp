#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,n,t,f;
    vector<ll> v(200,0),s;
    int st,a,b,c;
    char m;
    map<ll,ll> ma,sa;
    cin>>t;
    cin>>a;
    for(i=1; i<=a; i++) {
       cin>>b;
       v[b] = 1;
    }
    cin>>b;
    for(i=1; i<=b; i++) {
       cin>>a;
       v[a] = 1;
    }
    f = 0;
    for(i=1;i<=t;i++){
        if(v[i]==0){
            f = 1;break;
        }
    }
if(f==0){
    cout<<"I become the guy."<<endl;
}
else cout<<"Oh, my keyboard!"<<endl;

}
