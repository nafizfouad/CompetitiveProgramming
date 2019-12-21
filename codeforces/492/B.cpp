#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector<long double> vv,ss;
    map<char,long long int> :: iterator it,ki;

    cin>>n>>t;
    a = 0;
    b = 0;
    c = 0;
    f = 0;
    for(i=0;i<n ;i++)
    {
      cin>>a;
      vv.push_back(a);
    }
    sort(vv.begin(),vv.end());
    ss.push_back((vv[0]-0)*1.0);
    ss.push_back((t-vv[vv.size()-1])*1.0);
    for(i=1;i<vv.size();i++){
        ss.push_back(((vv[i]-vv[i-1])*1.0)/2.0);
    }
    sort(ss.begin(),ss.end(),greater<long double> ());
    cout<<setprecision(10)<<fixed<<ss[0]<<endl;
    vv.clear();
    ss.clear();
    return 0;
}
