#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,b,c,n,t,m,l;
    vector<long long int> v,s;
    cin>>n>>a>>b>>k;
    t = a+b;
    m = 0;
    for(i=1; i<=n; i++)
    {
        cin>>c;
        v.push_back(c);
        int mm=0;

        if(c%t!=0 && (c%t)<=a)
        {
            m++;
        }
        else
        {
            j = c%t;
            if(j==0)
            {
                j = b;
            }
            else {j = j-a;}
            if(j%a==0)
            {
                s.push_back(j/a);
            }
            else
            {
                s.push_back((j/a)+1);
            }
        }
    }
    //  cout<<endl;
    sort(s.begin(),s.end());
    for(c=0; c<s.size(); c++)
    {
        k = k-s[c];
        // cout<<k<<endl;
        if(k>=0)
        {
            m++;
        }
        else
        {
            break;
        }
    }
    cout<<m<<endl;
}
