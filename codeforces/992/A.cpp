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
        vv.push_back(a);
    }
    c =0;
    for(i=0;i<t;i++){
      if(vv[i]!=0){
        if(ma[vv[i]]==0){
            c++;
            ma[vv[i]]++;
        }
        else {
            ma[vv[i]]++;
        }
      }
    }
    cout<<c<<endl;
    return 0;
}


