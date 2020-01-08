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

    map<char,long long int>  ma,sa;
    map<char,long long int> :: iterator it;
    vector<string> :: iterator ki;

    cin>>a;
    f = 0;
    for(i=1; i<=a; i++)
    {
     cin>>ss;
     ma[ss[0]]++;
    }
    sum = 0;
    for(it = ma.begin();it!=ma.end();it++){
        if((*it).second>1){
            b = (*it).second/2;
            b = b-1;
            if((*it).second%2==0){
                c = b;
            }
            else {c = b+1;}
            sum = sum+((b*(b+1))/2);
            sum = sum+((c*(c+1))/2);
        }
    }
    cout<<sum<<endl;
    ma.clear();
    return 0;
}

