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
    vector<long long int> vv,aa;

    map<char,long long int>  ma,sa;
    map<char,long long int> :: iterator it;
    vector<string> :: iterator ki;

    cin>>a;
    f = 0;
    for(i=1;i<=a;i++){
        cin>>b;
        vv.push_back(b);
    }
    sort(vv.begin(),vv.end());
    if((vv[vv.size()-2]+vv[vv.size()-3])<=vv[vv.size()-1]){
        cout<<"NO"<<endl;
    }
    else {
            cout<<"YES"<<endl;
        c = vv[vv.size()-1];
    vv[vv.size()-1] = vv[vv.size()-2];
    vv[vv.size()-2] = c;
        for(i=0;i<vv.size();i++){
            cout<<vv[i]<<" ";
        }
    }
    vv.clear();
    aa.clear();
    return 0;
}
