#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,n,t,m,d;
    vector<long long int> v,s;
    string ss,vv;
    cin>>ss;
    d = ss.size()/2;
    if(ss.size()%2==0)
    {
        d = d-1;
    }
    for(i=0; i<d; i++)
    {
        vv.push_back(ss[i]);
    }
    d = ss.size()/2;
    if(ss.size()%2==0)
    {
        d = d-1;
    }
    reverse(vv.begin(),vv.end());
    m = 2;
    for(i=0; i<vv.size(); i++)
    {
        ss.insert(ss.begin()+d+m,vv[i]);
        m = m+2;
    }
    for(i=d; i<ss.size(); i++)
    {
        cout<<ss[i];
    }

}

