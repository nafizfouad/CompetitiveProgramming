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
    sum = 0;
for(i=1;i<=n;i++){
      cin>>a>>b>>c;
      sum = 0;
      if(c%2==1){
        c = c-1;
      }
      if(b==0){
        cout<<0<<endl;
      }
      else if(a==0 && c==0){
        cout<<0<<endl;
      }
      else {
        if(c>=b*2){
            sum = sum+(b*3);
            b = 0;
        }
        else if(c<b*2){
            sum = sum+(c+(c/2));
            b = b-(c/2);
            if(b%2==1){
                b = b-1;
            }
            if(b>=a*2){
                sum = sum + (a*3);
                a = 0;
            }
            else if(b<a*2){
                sum = sum + (b+(b/2));
                a = a-(b/2);
            }
        }
        cout<<sum<<endl;
      }
}

    return 0;
}