#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,h,m,fl,l,d,fl1,fl2,fl3,fl4;
    int f;
    string str,st;
    vector<int> s,v,one,two;
    map<int,int> ma,sa;
    map<int,int> :: iterator it,ki;
    set<int> se;
    cin>>str;
    fl = 0;
    f = 0;
    c = 0;
    fl1 = 0;
    fl2 = 0;
    fl3 = 0;
    fl4 = 0;
    // fl5 = 0;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='[')
        {
            fl1=1;
            d = i;
            break;
        }
    }
    for(i=str.size()-1; i>=0; i--)
    {
        if(str[i]==']')
        {
            fl2=1;
            f = i;
            break;
        }
    }
    if(fl1==1 && fl2==1)
    {
        for(i=d+1; i<f; i++)
        {
            if(str[i]==':')
            {
                fl3=1;
                a = i;
                break;
            }
        }
    }
    c = 0;
    if(fl3==1)
    {
        for(i=f-1; i>a; i--)
        {
            if(str[i] ==':')
            {
                b = i;
                fl4=1;
                break;
            }
        }
    }
    if(fl4==1)
    {
        for(i=a+1; i<b; i++)
        {
            if(str[i]=='|')
            {
                c++;
            }
        }
    }
    if(fl1==1 && fl2==1 && fl3==1 && fl4==1)
    {
        cout<<4+c<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}

