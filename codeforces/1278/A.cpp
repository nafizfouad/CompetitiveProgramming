#include<bits/stdc++.h>
using namespace std;
int main(){

int i,j,k,a,b,c,n,t,f,d;
cin>>t;
string s,v;
map<char,int> ma,sa;
vector<int> vv;
map<char,int> :: iterator it,ki;
for(i=1;i<=t;i++){
    cin>>s;
    cin>>v;
    c = 0;
    for(j=0;j<s.size();j++){
        ma[s[j]]++;
        sa[s[j]]++;
    }
    f = 0;
    for(j=0;j<v.size();j++){
            for(k=j;k<v.size();k++){
        if(ma[v[k]]!=0){
            ma[v[k]]--;
            c++;
            if(c==s.size()){
                f = 1;
                break;
            }
        }
        else if(ma[v[k]]==0){
            ma = sa;
            c =0;
        }}
        if(f==1){
            break;
        }
        c =0;
        ma = sa;
    }
    if(f==1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    ma.clear();
    sa.clear();
    s.clear();
    v.clear();
    vv.clear();
}

return 0;
}
