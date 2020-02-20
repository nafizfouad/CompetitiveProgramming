#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,a,b,c,n,t,l,r,d,f,t1,f1,t2,f2,mi,ma,h;
    cin>>n>>h>>mi>>ma>>k;
    for(i=1; i<=k; i++) {
        cin>>t1>>f1>>t2>>f2;
        if(t1==t2){
            cout<<abs(f1-f2)<<endl;
        }
        else{
            a = 0;
           if(f1>=mi && f1<=ma){a = a+abs(t1-t2);a = a+abs(f1-f2);}
           else if(f1<mi){
            a = a+abs(t1-t2)+abs(f1-mi);
            a = a+abs(f2-mi);
           }
        else if(f1>mi){
            a = a+abs(t1-t2)+abs(f1-ma);
            a = a+abs(f2-ma);
           }
           cout<<a<<endl;
        }
    }

}
