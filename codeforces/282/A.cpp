#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int i,j,k,a,b,c;
    string s,v;
    cin>>a;
    c = 0;
    for(i=1;i<=a;i++){
        cin>>s;
        if(s[0]=='+' || s[1]=='+'  || s[2]=='+'){
            c++;
        }
        else if(s[0] == '-' || s[1] =='-' || s[2]=='-'){
            c--;
        }
    }
    cout<<c<<endl;
    return 0;
    
}