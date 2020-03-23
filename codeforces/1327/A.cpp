#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,a,b,c,n,t,d,f;
    long double dd;
    vector<ll> v,s;
    string st,et;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k;
        if(k==1 && n%2==0)
        {
            cout<<"NO"<<endl;
        }
        else if(k==2 && n%2==0 && n!=2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            dd = sqrt(n);
            d = dd/1;
            if(n%2==0)
            {
                if(k%2==1)
                {
                    cout<<"NO"<<endl;
                }
                else if(k%2==0 && k<=d)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else if(n%2==1)
            {
                if(k%2==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(k%2==1 && k<=d)
                {
                    cout<<"YES"<<endl;
                }
                else {
                    cout<<"NO"<<endl;
                }
            }
        }
    }

}
