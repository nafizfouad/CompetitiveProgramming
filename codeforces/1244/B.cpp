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

   long long int i,j,k,a,b,c,n,t,sum,d,f;
    vector<pair<long long int,long long int> > v,s,tt,pp;
    map<string, int> ma,sa;
    string ss;
    vector<long long int> vv;
    map<string, int> :: iterator it;
    vector<string> :: iterator ki;
//    string ss,vv;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        cin>>ss;
        d = 0;
        f  = 0;
        c = 0;
        for(j=0;j<ss.size();j++){
            if(ss[j]=='1'){
                d = j+1;
                c = 1;
                f = ss.size()-d;
            }
        }
        if(c==0){vv.push_back(ss.size());}
       else if(f<d){
            vv.push_back(d*2);
        }
        else {vv.push_back(d+1+f);}
        reverse(ss.begin(),ss.end());
        for(j=0;j<ss.size();j++){
            if(ss[j]=='1'){
                d = j+1;
                c = 1;
                f = ss.size()-d;
            }
        }
        if(c==0){vv.push_back(ss.size());}
       else if(f<d){
            vv.push_back(d*2);
        }
        else {vv.push_back(d+1+f);}
        sort(vv.begin(),vv.end(),greater<long long int> () );
        cout<<vv[0]<<endl;
        vv.clear();
        ss.clear();
    }
    return 0;
}