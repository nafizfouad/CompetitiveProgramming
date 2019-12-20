#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<char,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a;
        vv.push_back(a);
    }
    c = 0;
    f = 0;
    if(vv.size()==1){
        ss.push_back(1);
    }
    for(j=0;j+1<vv.size();j++){
            c = 0;
        if(vv[j]<=vv[j+1]){
            c++;
            while(vv[j]<=vv[j+1]){
                c++;
                j++;
                if(j==vv.size()-1){
                   f = 1; break;
                }
            }
            ss.push_back(c);

        }
        if(f==1){
                break;
            }
    }
    sort(ss.begin(),ss.end(),greater<int> ());
    if(ss.size()>0 && ss[0]>0){cout<<ss[0]<<endl;}
    else {cout<<1<<endl;}
    ss.clear();
    vv.clear();
    return 0;
}
