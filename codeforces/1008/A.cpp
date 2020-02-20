#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,a,b,c,n,t,l,r,d,f;
    string s,st;
    cin>>s;
    if(s[s.size()-1]!='a' && s[s.size()-1]!='u' && s[s.size()-1]!='e' && s[s.size()-1]!='o' && s[s.size()-1]!='i' && s[s.size()-1]!='n') {
        cout<<"no"<<endl;
    } else {
        f = 0;
        for(i=0; i+1<s.size(); i++) {
            if(s[i]!='a' && s[i]!='u' && s[i]!='e' && s[i]!='o' && s[i]!='i' && s[i]!='n') {
              if(s[i+1]!='a' && s[i+1]!='u' && s[i+1]!='e' && s[i+1]!='o' && s[i+1]!='i'){
                f = 1;
                break;
              }
            }
        }
        if(f==0){
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
    }


}
