#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i,j,k,a,b,c,n,t,d;
    string s,v;
    char ch;
    vector<unsigned long long int> ss,vv;
    map<char,unsigned long long int> ma;
    cin>>n>>t;
    cin>>s;
    s = "#"+s;
    for(j=1; j<=t; j++)
    {
        cin>>ch;
        ma[ch] = 1;
    }
    c = 0;
    d = 0;
    for(i=1; i<=n; i++)
    {
        if(ma[s[i]]==0)
        {
            d = d+((c*(c+1))/2);
            c = 0;
        }
        else
        {
            c++;
        }
    }
    d = d+((c*(c+1))/2);
    cout<<d<<endl;
}


