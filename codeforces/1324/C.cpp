#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,d,f,n,t;
    vector<ll> v,s;
    string st,et;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>st;
        d = -9999999;
        for(j=0; j<st.size(); j++)
        {
            if(st[j]=='L')
            {
                c = 0;
                while(st[j]=='L')
                {
                    c++;
                    j++;
                    if(j==st.size())
                    {
                        break;
                    }
                }
                if(c>d)
                {
                    d = c;
                }
                if(j==st.size())
                {
                    break;
                }
            }
        }
        if(d == -9999999){cout<<1<<endl;}
        else {cout<<d+1<<endl;}
    }
    return 0;
}
