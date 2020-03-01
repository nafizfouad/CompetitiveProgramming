#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b,c,d,f,g,h,t;
    vector<int> v,s,st;
    //string p,s;
    cin>>t;
    c = 0;
    d = 0;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        if(a==1)
        {
            d++;
        }
        v.push_back(a);
    }
    for(i=1; i<=t; i++)
    {
        cin>>a;
        if(a==1)
        {
            c++;
        }
        s.push_back(a);
    }
    if(s==v)
    {
        cout<<-1<<endl;
    }
    else if(d>c)
    {
        cout<<1<<endl;
    }
    else
    {
        a = 0;
        int su = 0 ;
        for(i=0; i<t; i++)
        {
            if(v[i]!=s[i])
            {
                if(v[i]==0)
                {
                    su = su+1;
                }
                else
                {
                    a++;
                }
            }
        }
        su++;
        if(a==0){
            cout<<-1<<endl;
        }
       else if(su%a==0)
        {
            cout<<(su/a)<<endl;
        }
        else
        {
            cout<<((su/a)+1)<<endl;
        }
    }
    return 0;
}
