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
    vector<long long int> ma[200],sa[200];
    vector <long long int> vv,ss;
    map<long long int,long long int> it,ki;
    long long int ii;
    ios_base::sync_with_stdio(false);
    cin>>t;
    cin>>s;
    cin>>a;
    for(i=1; i<=a; i++)
    {
        cin>>v;
        b = -9999999;
        if(i==1)
        {
            for(j=0; j<s.size(); j++)
            {
                ii = j+1;
                c = int(s[j]);
                ma[c].push_back(ii);
            }
        }
        for(j=0; j<v.size(); j++)
        {
            c = int(v[j]);
            if(ma[c][it[c]]>b)
            {
                b = ma[c][it[c]];
            }
            it[c]++;
        }

        cout<<b<<endl;
        it.clear();
        v.clear();
    }
    return 0;
}