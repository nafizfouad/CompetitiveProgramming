#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,n,t,a;
    vector<int> v,s;
    cin>>t>>n;
    int c= 0;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<t; i++)
    {

        if(v[i]>=v[n-1] && v[i]>0)
        {
            c++;
        }

    }
    cout<<c<<endl;
    return 0;
}
