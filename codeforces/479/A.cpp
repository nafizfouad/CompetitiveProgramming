#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;


    a = 0;
    b = 0;
    c = 0;
    f = 0;
    cin>>n>>t>>c;
    vv.push_back(n*t*c);
    vv.push_back(n+t+c);
    vv.push_back((n*t)+c);
    vv.push_back(n+(t*c));
    vv.push_back((n+t)*c);
    vv.push_back(n*(t+c));
    sort(vv.begin(),vv.end(),greater<long long int>());
   cout<<vv[0]<<endl;
    vv.clear();

    return 0;
}
