#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,m;
    vector<int> v,s;
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    c = 0;
    for(i=0; i<m; i++)
    {
        if(v[i]==10)
        {
            c++;
            while(v[i]==10)
            {
                i++;
                if(i==m)
                {
                    break;
                }
            }
            i--;

        }
        else if(v[i]==1)
        {
            c++;
            while(v[i]==1)
            {
                i++;
                if(i==m)
                {
                    break;
                }
            }
            i--;
        }
    }
    cout<<c<<endl;
    return 0;
}