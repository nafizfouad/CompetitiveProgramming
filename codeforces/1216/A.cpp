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
    cin>>n;
    cin>>s;
     a= 0;
     b  = 0;
     c = 0;
for(i=0;i<n;i++){
      if(s[i]=='a'){
        a++;
      }
      else if(s[i]=='b'){
        b++;
      }
      if(i%2==1){
        if(a!=b){
            if(s[i]=='b'){
                s[i] = 'a';
                b--;
                a++;
                c++;
            }
            else if(s[i]=='a'){
                s[i] = 'b';
                b++;
                a--;
                c++;
            }
        }
      }
}
  cout<<c<<endl;
  cout<<s<<endl;
s.clear();
    return 0;
}