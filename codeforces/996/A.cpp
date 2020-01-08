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
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v[10];
    map<char,long long int> ma,sa;
    vector<long long int> vv;
    map<char,long long int> :: iterator it,ki;

    cin>>a;

    c = 0;
    if(a==1 || a==5 || a==10 || a==20 || a==100)
    {
        cout<<1<<endl;
    }
    else
    {
        if(a%100==0)
        {
            c = c+a/5;
            vv.push_back(c);
        }
        if(a%20==0)
        {
            c = c+a/4;
            vv.push_back(c);
        }
        if(a%10==0)
        {
            c = c+a/3;
            vv.push_back(c);
        }
        if(a%5==0)
        {
            c = c+a/2;
            vv.push_back(c);
        }
        c = 0;
        c = c+a/100;
        a = a-((a/100)*100);
        c = c+a/20;
        a = a-((a/20)*20);
        c = c+a/10;
        a = a-((a/10)*10);

        c = c+a/5;
        a = a-((a/5)*5);
        c = c+a/1;
        a = a-((a/1)*1);
        vv.push_back(c);
        sort(vv.begin(),vv.end());
        cout<<vv[0]<<endl;
        vv.clear();
    }


    return 0;
}