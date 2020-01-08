#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<functional>
#include<iterator>
#include<string>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t;
    vector<string> v,s,tt,pp;
    map<string, int> ma,sa;
    map<string, int> :: iterator it;
    vector<string> :: iterator ki;
    string ss,vv;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ss;
        v.push_back(ss);
        ma[ss]++;
    }
    for(i=1; i<=n; i++)
    {
        cin>>ss;
        s.push_back(ss);
    }
    for(i=0; i<n; i++)
    {
        if(ma[s[i]]!=0){
            ma[s[i]]--;
        }
        else {
            tt.push_back(s[i]);
        }
    }
    for(it = ma.begin();it != ma.end();it++){
        for(k = 1; k<=(*it).second;k++){
            pp.push_back((*it).first);
        }
    }
    if(tt.size()>0)sort(tt.begin(),tt.end());
    if(pp.size()>0)sort(pp.begin(),pp.end());
    c = 0;
    for(i=0; i<tt.size(); i++)
    {
            for(j=0; j<tt[i].size(); j++)
            {
                if(tt[i][j]!=pp[i][j])
                {
                    c++;
                }
            }
    }
    cout<<c<<endl;
    v.clear();
    s.clear();
    ma.clear();
    pp.clear();
    tt.clear();
    return 0;
}