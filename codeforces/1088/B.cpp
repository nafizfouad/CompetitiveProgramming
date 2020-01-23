#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,n,t;
    vector<long long int> v,s;
    cin>>a>>n;
    for(i=1; i<=a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    b = v[0];
    for(i=1; i<a; i++)
    {
        v[i] = v[i]-b;
        b = b+v[i];
    }
    c = 0;
    for(i=0; i<a; i++)
    {
        if(v[i]!=0)
        {
            cout<<v[i]<<endl;
            c++;
        }
        if(c==n)
        {
            break;
        }
    }
    if(c<n)
    {
        for(i=1; i<=n-c; i++)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}

