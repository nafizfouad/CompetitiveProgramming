#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<char,int> ma,sa;
    vector<int> vv;
    map<char,int> :: iterator it,ki;
    cin>>t>>n;
    cin>>s;
    char ch;
    f = 0;
    c = 0;
    for(k=1; k<=n; k++)
    {
        for(j=0; j+1<s.size(); j++)
        {
         if(s[j]=='B' && s[j+1]=='G'){
            ch = s[j];
            s[j] = s[j+1];
            s[j+1] = ch;
            j++;
            if(j==s.size()){break;}
         }

        }
    }
    cout<<s<<endl;
    return 0;
}
