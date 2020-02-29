#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll i,j,k,a,b,c,n,d,f,t;

    cin>>n>>k;
    t = 240-k;
    a = 0;
    c = 0;
    for(i=1; i<=n; i++)
    {
        a = a+(5*i);
        if(a<=t)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
}
