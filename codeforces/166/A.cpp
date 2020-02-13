#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,k,a,b,su,t,n,c;
    vector<pair<int,int> >v,p;
    pair<int,int> cc;
    map<pair<int,int>,int> ma;
    map<pair<int,int>,int> :: iterator it;
    cin>>n>>t;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
        ma[{a,b}]++;
    }
    for(i=0; i+1<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
                if(v[j].first<v[j+1].first)
                {
                    cc = v[j];
                    v[j] = v[j+1];
                    v[j+1] = cc;
                }
        }
    }
    for(i=0; i+1<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(v[j].first==v[j+1].first)
            {
                if(v[j].second>v[j+1].second)
                {
                    cc = v[j];
                    v[j] = v[j+1];
                    v[j+1] = cc;
                }
            }
        }
    }
    cout<<ma[{v[t-1].first,v[t-1].second}]<<endl;
    return 0;
}
