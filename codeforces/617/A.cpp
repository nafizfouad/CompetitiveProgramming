#include<bits/stdc++.h>
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
        if(a<=5)
        {
            cout<<1<<endl;
        }
        else
        {
            if(a%5==0)
            {
                c = c+a/5;
                vv.push_back(c);
            }
            if(a%4==0)
            {
                c = c+a/4;
                vv.push_back(c);
            }
            if(a%3==0)
            {
                c = c+a/3;
                vv.push_back(c);
            }
            if(a%2==0)
            {
                c = c+a/2;
                vv.push_back(c);
            }
            c = 0;
                c = c+a/5;
                a = a-((a/5)*5);
                c = c+a/4;
                a = a-((a/4)*4);
                c = c+a/3;
                a = a-((a/3)*3);

                c = c+a/2;
                a = a-((a/2)*2);
                c = c+a/2;
                a = a-((a/2)*2);
                c = c+a/1;
                a = a-((a/1)*1);
                vv.push_back(c);
            sort(vv.begin(),vv.end());
            cout<<vv[0]<<endl;
            vv.clear();
        }


    return 0;
}
