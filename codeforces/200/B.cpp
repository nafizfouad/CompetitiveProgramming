#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    long double i,j,k,n,t,f,a,b,c;
    vector<long double> v,s;
    string st;
    char m;
    cin>>t;
b = 0.0;
    for(i=1;i<=t;i++){
        cin>>a;
        if(a!=0.0){
            b = b+(a/100.0);
        }
    }
    cout<<setprecision(12)<<fixed<<(b/t)*100.0<<endl;
}
