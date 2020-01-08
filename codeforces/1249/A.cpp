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
    cin>>t;

for(i=1;i<=t;i++){
      cin>>a;
      for(j=1;j<=a;j++){
        cin>>b;
        vv.push_back(b);
      }
      sort(vv.begin(),vv.end());
      f = 0;
      for(j=1;j<vv.size();j++){
        if((vv[j]-vv[j-1])==1){
            f = 1;
            break;
        }
      }
      if(f==1){
        cout<<2<<endl;
      }
      else if(f==0){
        cout<<1<<endl;
      }
      vv.clear();
}
    return 0;
}