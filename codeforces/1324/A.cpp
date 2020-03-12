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
    for(k=1; k<=t; k++)
    {
        cin>>n;
        v.clear();
        b = 0;
        c = 0;
        for(j=1; j<=n; j++)
        {
            cin>>a;
            if(a%2==0){
                b++;
            }
            else{
                c++;
            }
        }
        if(b==n || c==n)
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
