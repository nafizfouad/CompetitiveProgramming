#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,f,d;
    string s,v[10];
    map<char,int> ma,sa;
    vector<int> vv;
    map<char,int> :: iterator it,ki;

    cin>>s;
    char ch;
    f = 0;
    c = 0;

    for(j=0; j<s.size(); j++)
    {
        if(s[j]=='4' || s[j]=='7')
        {
            c++;
        }
    }
    v[0].push_back(c+'0');
    for(j=0; j<v[0].size(); j++)
    {
        if(v[0][j]!='4' && v[0][j]!='7')
        {
            f = 1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
