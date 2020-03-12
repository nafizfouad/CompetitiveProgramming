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
        cin>>n;
        v.clear();
        b = 0;
        c = 0;
        for(j=1; j<=n; j++)
        {
            cin>>a;
            v.push_back(a);
        }
        f = 0;

        for(j=0; j<n; j++)
        {
            for(k=n-1; k>=j+2; k--)
            {
                if(v[j]==v[k])
                {
                    f = 1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
