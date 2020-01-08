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
    cin>>v;
    cin>>s;
    f = 0;
    for(j=0;j<v.size();j++){
        ma[v[j]] = 1;
    }
    for(j=0;j<s.size();j++){
        if(ma[s[j]]==1){
            f = 1;
            break;
        }
    }
    if(f==0){
        cout<<"NO"<<endl;
    }
    else if(f==1){
        cout<<"YES"<<endl;
    }
    v.clear();
    s.clear();
    ma.clear();
}
    return 0;
}
