#include<bits/stdc++.h>
using namespace std;
int main() {


    long long int i,j,k,sum,c,a,b,n,t,d,mod,f,dd;
    cin>>t;
    string s,v;
    for(i=1; i<=t; i++) {

        cin>>s;
        sum = 0;
        c = 0;
        f = 0;
        d = 0;
        dd = 0;
        for(j=0; j<s.size(); j++) {
            sum = sum + (s[j] - '0');
            if(s[j]!='0') {
                c++;
            }
            if(s[j] =='0') {
                d = 1;
                dd++;
            }
            if(s[j]!='0') {
                mod = (s[j] - '0')%2;
                if(mod==0) {
                    f = 1;
                }
            }
        }
        int ff = 0;
        if(s.size()==2) {
            if(s[0]>='6' || s[1]>='6') {
                ff =1;
            }
        }

        if(sum%3==0) {
         if(d==1 && f==1){
            cout<<"red"<<endl;
         }
         else if(d==0 && f==1){
            cout<<"cyan"<<endl;
         }
          else if(f==0 && dd>=2){
            cout<<"red"<<endl;
          }
          else if(f==0 && dd<2){
            cout<<"cyan"<<endl;
          }

        } else {
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}
