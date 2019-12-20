#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;

    cin>>a;
    for(i=1;i<=a ;i++)
    {
      cin>>n;
      ma[n] = i;
    }
    for(i=1;i<=a;i++){
        if(i!=a){cout<<ma[i]<<" ";}
        else cout<<ma[i]<<endl;
    }
    ma.clear();
    return 0;
}
