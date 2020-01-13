#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b,c,d,f,t,n,m;
    vector<int> v,s;
    string ss,vv;
    map<int,int> ma,sa;
    map<int,int> ::iterator it;
    cin>>n>>m;
    c = 0;
    t = 0;
    for(i=1; i<=m; i++)
    {
        cin>>a;
        cin>>ss;
        if(ss=="WA" && sa[a]==0)
        {
            ma[a]++;
        }
        else if(ss=="AC" && sa[a]==0)
        {
            sa[a] = 1;
            t++;
        }
    }
    f = 0;
    for(it = ma.begin(); it!=ma.end(); it++)
    {
        if((sa[(*it).first])==1)
        {
            f = f+(*it).second;
        }
    }
    cout<<t<<" "<<f<<endl;
    return 0;
}
