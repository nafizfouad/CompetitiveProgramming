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
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;

    cin>>a;
    d = 1;
    c = 1;
    for(i=1; i<=a; i++)
    {
        cin>>b;
        ss.push_back(b);
    }
    for(i=1; i<ss.size(); i++)
    {

        if(ss[i]==1)
        {
            d++;
            vv.push_back(c);
            c = 1;
            if(i==ss.size()-1){
                vv.push_back(c);
            }
        }
        else if(i==ss.size()-1){
            c++;vv.push_back(c);
        }
        else
        {
            c++;
        }
    }
    cout<<d<<endl;
    if(vv.size()==0){
        cout<<1<<endl;
    }
    else {for(i=0; i<vv.size(); i++)
    {
        if(i==vv.size()-1)
        {
            cout<<vv[i]<<endl;
        }
        else cout<<vv[i]<<" ";
    }
    vv.clear();}


    return 0;
}