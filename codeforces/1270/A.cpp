#include<iostream>
using namespace std;

int main() {

    int i,j,k,a,b,c,d,n,t,f,sum,su;
    cin>>t;
    for(i=1; i<=t; i++) {
        cin>>n>>a>>b;
        f = 0 ;
        for(j=1; j<=a; j++) {
            cin>>c;
            if(c==n){
                f = 1;
            }

        }
        for(j=1; j<=b; j++) {
            cin>>c;
            if(c==n){
                f=2;
            }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else if(f==2){
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
