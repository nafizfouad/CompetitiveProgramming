#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int i,j,k;
    string v,s,t;
    cin>>v;
    cin>>s;
    t = "";
    for(i=0;i<v.size();i++){
        if(v[i]==s[i]){
            t = t+'0';
        }
        else t = t+'1';
    }
    cout<<t<<endl;
    
}