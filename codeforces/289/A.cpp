#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll i,j,k,a,b,c,n,t,f,m,l;
    vector<ll> v,s;
    string st,vt;
    cin>>n>>k;
    int su = 0,d;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        c = a-b;
        c  = abs(c)+1;
        // if(c%k!=0){
        //v.push_back(abs(k-d));
        //}
        su = su+c;
    }
    if(su%k==0)
    {
        cout<<0<<endl;
    }
//sort(v.begin(),v.end());
    else
    {
        c = su%k;
        if(c<k){
            cout<<abs(c-k)<<endl;
        }
        else{
            d = su/k;
            f = k*(d+1);
            cout<<abs(f-c)<<endl;
        }
    }
}