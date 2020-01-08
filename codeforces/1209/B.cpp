#include<iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<deque>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<ctype.h>
#include<functional>
using namespace std;

  vector < long long int > vv[1010],ss,su;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum,mod;
    string s,v;
    map<long long int,long long int> it,ki;
    long long int ii;
    ios_base::sync_with_stdio(false);
    cin>>t;
    cin>>v;
    for(i=1; i<=t; i++)
    {
        cin>>n>>a;
        ss.push_back(n);
        for(j=0; j<a; j++)
        {
            vv[i].push_back(v[i-1]-'0');
        }
    }
    for(i=1; i<=t; i++)
    {
        c = v[i-1]-'0';
        if(c==1){c=0;}
        else if(c==0){c=1;}
        d = 0;
        for(j=vv[i].size(); j<=300; j++)
        {
            d++;
            vv[i].push_back(c);
            if((d%ss[i-1])==0)
            {
                if(c==1)
                {
                    c=0;
                }
                else if(c==0)
                {
                    c = 1;
                }
                d = 0;
            }

        }
    }
    sum = 0;
    for(i=0; i<=300; i++)
    {
        sum = 0;
        for(j=1; j<=t; j++)
        {
            sum = sum+vv[j][i];
        }
        su.push_back(sum);
    }
    sort(su.begin(),su.end(),greater<int>());
    cout<<su[0]<<endl;
    su.clear();
    for(j=1; j<=t; j++)
    {
        vv[i].clear();
    }
    ss.clear();
    return 0;
}
