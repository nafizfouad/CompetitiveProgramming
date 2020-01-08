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

   long long int i,j,k,a,b,c,n,t,sum,d,f,m;
    vector<pair<long long int,long long int> > v,s,tt,pp;
    string ss;
    vector<long long int> vv;

    map<long long int,long long int>  ma,sa;
        map<long long int,long long int> :: iterator it;
    vector<string> :: iterator ki;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a;
        ma[a]++;
    }
    m = -999999;
    for(it=ma.begin();it!=ma.end();it++){
        if((*it).second>m){
            m = (*it).second;
        }
    }
    cout<<m<<endl;
    return 0;
}
