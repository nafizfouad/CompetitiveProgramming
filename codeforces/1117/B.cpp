#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i,j,k,a,b,c,n,t,d;
    string s,v;
    vector<unsigned long long int> ss,vv;

    cin>>n>>t>>a;
    for(i=1; i<=n; i++)
    {
        cin>>b;
            vv.push_back(b);


    }
    sort(vv.begin(),vv.end(),greater<unsigned long long int> ());
    b = a+1;
    d = t/b;
    c = t%b;
    if(c==0)
    {
        j = vv[0]*d*a;
        if(b!=2)
        {
            j = j+((t-(d*2))*vv[1]);
        }
        else
        {
            j = j+ (d*vv[1]);
        }
        cout<<j<<endl;
    }
    else
    {
        j = vv[0]*d*a;
        j = j+(vv[0]*(c));
        j = j+((t-(d*a)-c)*vv[1]);
        cout<<j<<endl;
    }
}