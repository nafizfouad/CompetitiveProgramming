#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,h,m;
    int f;
    string str;
    vector<int> s,v,one,two;
    vector<pair<int,int> > ve;
    map<int,int> ma,sa;
    map<int,int> :: iterator it,ki;
    set<int> se;
    cin>>n>>m;
    c = 0;
    if(n<m)
    {
        cout<<n+m<<endl;
    }
    else
    {
        for(i=1; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                ve.push_back({i,n/i});
            }
        }
        for(i=0; i<ve.size(); i++)
        {
            a = (ve[i].first*m)+ve[i].second;
            c = (a/m)*(a%m);
            if(c==n)
            {
                v.push_back(a);
            }
            a = (ve[i].second*m)+ve[i].first;
            c = (a/m)*(a%m);
            if(c==n)
            {
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
}