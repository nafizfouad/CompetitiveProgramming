#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;

    cin>>a;
    for(i=a+1; ;i++)
    {
        c = 0;
        t = i;
        while(t)
        {
            b = t%10;
            t = t/10;
            if(ma[b]==0)
            {
                ma[b] = 1;
                c++;
            }
            else
            {
                break;
            }
        }
        if(c==4)
        {
            cout<<i<<endl;
            ma.clear();
            break;
        }
        ma.clear();
    }
    return 0;
}
