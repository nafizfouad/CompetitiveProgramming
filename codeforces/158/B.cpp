#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,d,f,r,e,h,l,o,t,sum,th,fo,on,n,to;
    vector<int> v,s;
    cin>>n;
    f = 0;
    o = 0;
    t = 0;
    th = 0;
    fo = 0;
    sum = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
        {
            o++;
        }
        else if(a==2)
        {
            t++;
        }
        else if(a==3)
        {
            th++;
        }
        else if(a==4)
        {
            fo++;
        }
    }
    sum = sum+fo;

        if(th>o)
        {
            th = th-o;
            sum = sum+o;
            sum = sum+th;
            o = 0;
        }
        else if(th<=o)
        {
            sum = sum+th;
            if(o>th)
            {
                o = o-th;
            }
            else
            {
                o = 0;
            }
        }

    if((t*2)%4==0)
    {
        sum = sum+((t*2)/4);
        to = 0;
    }
    else
    {
        sum = sum+((t*2)/4);
        to = 2;
    }
    o = o+to;
    if(o<4 && o>0)
    {
        sum = sum+1;
    }
    else if(o>=4)
    {
        sum = sum + (o/4);
        if(o%4!=0)
        {
            sum = sum+1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
