
#include<algorithm>
#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
 
    int i,j,k,a,b,c,n,s,t,h,m,x,y,l,d,fl1,fl2,fl3,fl4;
    int f;
    string str,st;
    vector<int> v,o;
    map<int,int> ma,sa;
    cin>>b;
    for(i=1; i<=b; i++)
    {
 
        cin>>n>>s>>k;
        m = s-1000;
        if(m<1)
        {
            m = 1;
        }
        l = s+1000;
        if(l>n)
        {
            l = n;
        }
        for(j=1; j<=k; j++)
        {
            cin>>a;
            ma[a] = 1;
        }
        
        for(j=m; j<=l; j++)
        {
            if(ma[j]!=1)
            {
 
                h = abs(s-j);
                o.push_back(h);
            }
        }
        sort(o.begin(),o.end());
        cout<<o[0]<<endl;
        o.clear();
        ma.clear();
    }
 
}