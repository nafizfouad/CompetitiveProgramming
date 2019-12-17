#include<bits/stdc++.h>
using namespace std;
int main() {


    long long int i,j,k,a,b,c,d,n,t,f;
    vector<long long int> v,s;
    string ss,vv;
    cin>>ss;
    a = 0;
    b = 0;
    f = 0;
    for(i=0; i<ss.size(); i++) {
        if(ss[i]=='0'){
            a = 0;
          while(ss[i]=='0'){
            a++;
            if(a==7){
              f = 1;break;
            }
            i++;
            if(i==ss.size()){a++;if(a==7)f=1;break;}

          }
        }
        else if(ss[i]=='1'){
            b = 0;
          while(ss[i]=='1'){
            b++;
            i++;
            if(b==7){
              f = 1;break;
            }
            if(i==ss.size()){b++;if(b==7)f=1;break;}

          }
        }
        if(f==1){break;}
        if(i==ss.size()){break;}
    }
if(f==0){cout<<"NO"<<endl;}
else if(f==1){cout<<"YES"<<endl;}
    return 0;
}
