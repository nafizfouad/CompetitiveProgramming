#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll i,j,k,a,b,c,n,t,l,r,d,f,t1,f1,t2,f2,h;
    string s,st;
    map<string,int> ma;
    a = 0;
    c = 0;
    i = 0;
    d = 0;
    while(getline(cin,s)) {
            if(s==""){break;}
        if(s[0]=='+') {
            ma[s] = 1;
            a++;
        } else if(s[0]=='-') {
            ma[s] = 0;
            a--;
        } else{
            for(i=0; i<s.size(); i++) {
                if(s[i]==':') {
                    break;
                }
            }
            c= 0;
            for(j=i+1; j<s.size(); j++) {
                c++;
            }
            c = c*a;
            d = d+c;

        }
       // cout<<a<<endl;
        //cout<<c<<" "<<a<<endl;
       //cout<<i<<" "<<s.size()<<endl;
    }
    cout<<d<<endl;
}


