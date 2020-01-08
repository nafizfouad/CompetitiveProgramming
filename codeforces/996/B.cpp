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

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum,mod;
    string s,v;
    vector < pair < pair<long long int,long long int>, long long int> > vv,ss;
    map<long long int,long long int> it,ki;
    long long int ii;
    ios_base::sync_with_stdio(false);
    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>a;
        mod = a%t;
        sum = a/t;
        if(mod+1<=i && mod!=0){
            vv.push_back({{sum,i},i});
        }
        else if(mod+1<=i && mod == 0){
            vv.push_back({{sum,i},i});
        }
        else {
            vv.push_back({{sum+1,i},i});
        }
    }
    sort(vv.begin(),vv.end());
    cout<<vv[0].second<<endl;
    vv.clear();
    return 0;
}
