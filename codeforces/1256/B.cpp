#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll i,j,k,a,b,c,d,f,e,n,t,p,m;

    map<ll,ll> ma,sa;
    cin>>n;
    while(n--)
    {
        cin>>t;
        vector<ll> v(102);
        for(i=1;i<=t;i++)cin >>v[i];
        for(i=1;i<=t;i++)
        {
            m=1000000000;
            for(j=i;j<=t;j++)
            {
                if(v[j] < m)
                {
                    m=v[j];
                    p=j;
                }
            }
            for(j=p;j>i;j--)v[j]=v[j-1];
            v[i]=m;
            if(p == t)break;
            if(i != p)i=p-1;
        }
        for(i=1;i<=t;i++)cout << v[i] <<" ";
        cout<<endl;
    }
}
