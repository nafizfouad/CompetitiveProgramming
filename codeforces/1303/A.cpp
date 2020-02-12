#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,j,k,a,b,c,d,n,t,l,f,s;
    vector<ll> v;
    vector<ll> :: iterator it,ki;
    map<pair<ll,ll>, ll> ma,sa;
    string st;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>st;
        c = 0;
        f = 0;
        d = 0;
        for(j=0; j+1<st.size(); j++)
        {
            if(st[j]=='1' && st[j+1]=='0')
            {
                c = 0;
                while(st[j+1]=='0')
                {
                    c++;
                    j++;
                    if(j==st.size()-1)
                    {
                        f = 1;
                        break;
                    }
                }
                if(f==1)
                {
                    break;
                }
                else{
                    d = d+c;
                }
            }
        }
        cout<<d<<endl;
    }
}
