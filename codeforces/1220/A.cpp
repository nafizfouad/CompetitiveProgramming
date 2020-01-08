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

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum,mod,max,min,a1,a2,k1,k2;
    string s,v;
    vector<long long int> vv,ss;
    map<long long int,long long int> it,ki;
    map<long long int,long long int> :: iterator ma;
    map<long long int,long long int,greater<long long int> > ba,sa;
    map<long long int,long long int,greater<long long int> > :: iterator ka;
    long long int ii;
    ios_base::sync_with_stdio(false);
    cin>>t;
    cin>>s;
    a = 0;
    b = 0;
    for(i=0;i<t;i++){
        if(s[i]=='r'){
            a++;
        }
        if(s[i]=='n'){
            b++;
        }
    }
    for(i=1;i<=b;i++){
        cout<<1<<" ";
    }
    for(i=1;i<=a;i++){
        cout<<0<<" ";
    }
    return 0;
}