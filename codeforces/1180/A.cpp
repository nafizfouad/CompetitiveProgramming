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
#include<functional>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum,s;
    //string s,v[10];
    map<char,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;
    cin>>n;
sum = 1;
a = 0;
for(i=1;i<=n;i++){
      sum = sum+(2*a);
      a = a+2;
}
  cout<<sum<<endl;
    return 0;
}