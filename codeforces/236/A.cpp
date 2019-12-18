#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f,r;
    string s;
    map<char,int> v;

    cin>>s;
    c = 0;
    for(i=0;i<s.size();i++){
        if(v[s[i]]==0){v[s[i]] = 1;}
    }
    if(v.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else if(v.size()%2==1){
        cout<<"IGNORE HIM!"<<endl;
    }
    v.clear();
    return 0;
}
