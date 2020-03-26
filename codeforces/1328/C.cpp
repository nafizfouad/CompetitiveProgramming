#include<bits/stdc++.h>
using namespace std;
int main(){

long long int a,b,c,d,n,t,f,i,j,k;
vector<long long int> v,s;
string st,ss,et;
cin>>t;
for(i=1;i<=t;i++){
    cin>>n;
    cin>>st;
    ss.push_back('1');
    et.push_back('1');
    f = 0;
    for(j=1;j<st.size();j++){
        if(st[j]=='2' && f==0){
            ss.push_back('1');
            et.push_back('1');
        }
        else if(st[j]=='2' && f==1){
            ss.push_back('0');
            et.push_back('2');
        }
        else if(st[j]=='1' && f==0){
            ss.push_back('1');
            et.push_back('0');
            f=1;
        }
        else if(st[j]=='1' && f==1){
            ss.push_back('0');
            et.push_back('1');
        }
        else if(st[j]=='0'){
            ss.push_back('0');
            et.push_back('0');
        }

    }
    cout<<ss<<endl;
    cout<<et<<endl;
    ss.clear();
    et.clear();
}
}
