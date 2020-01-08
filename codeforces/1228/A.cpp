#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<functional>
#include<iterator>
#include<string>
using namespace std;
int main()
{

    long long int i,j,k,a,b,c,n,t,sum,d,f,m,e,max,dif,cc;
    vector<pair<long long int,long long int> > v,s,tt,pp;
    string ss;
    vector<long long int> vv;

    map<long long int,long long int>  ma,sa;
    map<long long int,long long int> :: iterator it;
    vector<string> :: iterator ki;

    cin>>a>>b;
    j =0;
    for(i=a; i<=b; i++)
    {
        k = i;
        c = 0;
        f = 0;
        while(k)
        {
            n = k%10;
            k = k/10;
            c++;
            if(ma[n]==0)
            {
                ma[n] = 1;
            }
            else {f = 1;}
        }
        if(f==0){cout<<i<<endl;j = 1;break;}
        ma.clear();
    }
    if(j==0){cout<<-1<<endl;}
    return 0;
}