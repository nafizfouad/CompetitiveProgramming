#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    string s,p;
    int i,j,k;
    cin>>j;
    cin>>s;
    int a ,d;
    a = 0;
    d = 0;
    for(i=0;i<s.size();i++){
        if(s[i]=='D'){
            d++;
        }
      else  if(s[i]=='A'){
            a++;
        }
    }
    if(a==d){
        cout<<"Friendship"<<endl;
    }
    else if(a<d){
        cout<<"Danik"<<endl;
    }
    else cout<<"Anton"<<endl;
    return 0;
    
}