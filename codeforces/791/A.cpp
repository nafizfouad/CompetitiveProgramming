#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;

    cin>>a>>b;
    c = 0;
    for(i=1; ;i++)
    {
      c++;
      a = a*3;
      b = b*2;
      if(a>b){
        break;
      }
    }
    cout<<c<<endl;
    return 0;
}
