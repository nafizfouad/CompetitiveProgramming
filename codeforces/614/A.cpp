#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,a,b,c,n,t,l,r,d,f;
    double s;
    cin>>l>>r>>k;
    f = 0;
    a = -1;
    for(i=0;; i++) {
        s = pow(k,i);
        f++;
        if(s>=l) {
            a = i;
            f = 1;
            break;
        }

    }
    //cout<<f<<endl;
    if(a==-1) {
        cout<<-1<<endl;
    } else {
        c = 0;
        f = 0;
        for(i=a;; i++) {
            s = pow(k,i);
            f++;
            if(s>r) {
                break;
            } else {
               // cout<<s<<" "<<r<<endl;
                b = s/1;
                if(b<=r){
                  cout<<b<<" ";c++;
                }


            }
        }
        if(c==0){
            cout<<-1<<endl;
        }
        //cout<<f<<endl;
    }


}
