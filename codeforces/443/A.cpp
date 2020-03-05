#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


    ll a,b,c,n,d,f,m,x1,x2,y2,y1,x3,x4,y3,y4;
    int i,j,k,t;
    vector<int> v,s;
    vector<int> :: iterator it,ki;
    map<char,int> ma;
    string st;
    getline(cin,st);
    a  = 0;
    for(i=0; i<st.size(); i++)
    {
        if(st[i]>='a'&& st[i]<='z')
        {
            if(ma[st[i]]==0)
            {
                ma[st[i]]++;
                a++;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
