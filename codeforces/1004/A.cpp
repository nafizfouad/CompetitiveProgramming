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

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum;
    string s,v;
    map<char,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;
    cin>>t>>n;
    sum = 0;
for(i=1;i<=t;i++){
      cin>>a;
      vv.push_back(a);
}
for(i=0;i+1<vv.size();i++){
   c = vv[i]+n;
   d = vv[i+1]-n;
   if(c<d){
    sum = sum+2;
   }
   else if(c==d){
    sum = sum+1;
   }
}
cout<<sum+2<<endl;
    return 0;
}
