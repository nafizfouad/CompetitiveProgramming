#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f,r,e,h,l,o,t;
    vector<int> v,s;
    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        if(i==0)
        {
            d=a;
            v.push_back(b);
        }
        else
        {
            c = v[i-1]-a;
            c = c+b;
            v.push_back(c);
        }

    }
    v.push_back(d);
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0]<<endl;
    return 0;
}
