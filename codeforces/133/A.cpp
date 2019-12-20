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
    for(j=0; j<s.size(); j++)
    {
        if((s[j]=='H'))
        {
            f = 1;
            break;
        }
        else if(s[j]=='Q'){
            f = 1;
            break;
        }
        else if(s[j]=='9'){
            f = 1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
