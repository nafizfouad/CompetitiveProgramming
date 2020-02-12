#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,j,k,a,b,c,d,n,t,l,f,s,go,ba,g;
    vector<ll> v;
    vector<ll> :: iterator it,ki;
    map<pair<ll,ll>, ll> ma,sa;
    string st;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>g>>b;
        a = n;
        if(n%2==0)
        {
            n = n/2;
        }
        else
        {
            n= n/2;
            n= n+1;
        }
        go = 0;
        ba = 0;
        if(g>=n)
        {
            cout<<a<<endl;
        }
        else
        {
            a = a-n;
            if(n%g==0)
            {
                l = n/g;
                go = (g*l)+(b*(l-1));

                if((b*(l-1))<a)
                {
                    go = go+(a-(b*(l-1)));
                }
            }
            else
            {
                l = n/g;
                go = (g*l)+(b*l);
                go = go+(n%g);
                if((b*(l))<a)
                {
                    go = go+(a-(b*(l)));
                }

            }
            cout<<go<<endl;
        }

    }
}
