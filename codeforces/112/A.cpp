#include<bits/stdc++.h>
using namespace std;
int main() {


    long long int i,j,k,a,b,c,d,n,t;
    vector<long long int> v,s;
    string ss,vv;
    cin>>ss;
    cin>>vv;
    for(i=0; i<ss.size(); i++) {
        if(ss[i]>='A' && ss[i]<='Z') {
            ss[i] = ss[i] + 32;
        }
        if(vv[i]>='A' && vv[i]<='Z') {
            vv[i] = vv[i] + 32;
        }
    }

    if(ss<vv) {
        cout<<-1<<endl;
    } else if(ss==vv) {
        cout<<0<<endl;
    } else if(ss>vv) {
        cout<<1<<endl;
    }
    return 0;
}
