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
    vector<long long int> vv,ss;
    map<long long int,long long int> it,ki;
    map<long long int,long long int> :: iterator ma;
    map<long long int,long long int,greater<long long int> > ba,sa;
    map<long long int,long long int,greater<long long int> > :: iterator ka;
    long long int ii;
    ios_base::sync_with_stdio(false);
    cin>>t;
    d = 0;
    for(i=1; i<=t; i++)
    {
      cin>>b;
      it[b] = i;
    }
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='0'){
                ma = it.begin();
            vv.push_back((*ma).second);
            sa[(*ma).first] = (*ma).second;
            it.erase(it.begin());
        }
        else if(s[i]=='1'){
            ka = sa.begin();
            vv.push_back((*ka).second);
            sa.erase(sa.begin());
        }
    }
    for(i=0;i<vv.size();i++){
        cout<<vv[i]<<" ";
    }
    vv.clear();
    sa.clear();
    it.clear();
    return 0;
}