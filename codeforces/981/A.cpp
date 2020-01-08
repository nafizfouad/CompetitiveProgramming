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

  vector < long long int > vv[1010],ss,su;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum,mod;
    string s,v;
    map<long long int,long long int> it,ki;
    long long int ii;
    ios_base::sync_with_stdio(false);

    cin>>v;
    s = v;
    reverse(v.begin(),v.end());
    f = 0;
    if(v==s){
           f = 0;
        for(i=0;i+1<v.size();i++){
            if(v[i]!=v[i+1]){
                f = 1;
    break;
            }
        }
        if(f==1){
            cout<<v.size()-1<<endl;
        }
        else if(f==0){
            cout<<0<<endl;
        }
    }
    else cout<<v.size()<<endl;
   v.clear();
   s.clear();
    return 0;
}