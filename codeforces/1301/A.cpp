#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,n,t,f;
    vector<ll> v,s;
    string st,a,b,c;
    char m;
    map<ll,ll> ma,sa;
    cin>>t;
    for(i=1; i<=t; i++) {
        cin>>a;
        cin>>b;
        cin>>c;
        f = 0;
        for(j=0; j<a.size(); j++) {
            if(c[j]==a[j]) {
                m = b[j];
                b[j] = c[j];
                c[j] = m;
            } else if(c[j]==b[j]) {
                m = a[j];
                a[j] = c[j];
                c[j] = m;
            }
            else{
                f = 1;
                break;
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else if(f==0){
            cout<<"YES"<<endl;
        }
    }



}
