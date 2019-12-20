#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<char,int> ma,sa;
    vector<int> vv;
    map<char,int> :: iterator it,ki;

    cin>>s;
    f = 0;
    c = 0;
    for(j=0; j<s.size(); j++)
    {
        if((s[j]>='A' && s[j]<='Z'))
        {
            c++;
        }
    }
    if(c==s.size())
    {
     for(j=0;j<s.size();j++){
        cout<<char(s[j]+32);
     }
     cout<<endl;
    }
    else if(s[0]>='a' && s[0]<='z' && c==s.size()-1){
        cout<<char(s[0]-32);
        for(j=1;j<s.size();j++){
            cout<<char(s[j]+32);
        }
        cout<<endl;
    }
    else {
        cout<<s<<endl;
    }
    return 0;
}
