#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,n,t;
//vector<long long int,long long int> v,s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a<=7)
        {
            cout<<1<<endl;
        }
        else
        {
            b = a%7;
            if(b==0)
            {
                cout<<a/7<<endl;
            }
            else cout<<(a/7)+1<<endl;
        }
    }
    return 0;
}