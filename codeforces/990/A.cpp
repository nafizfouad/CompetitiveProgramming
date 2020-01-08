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

   long long int i,j,k,a,b,c,n,t,sum,d,f,m;
    vector<pair<long long int,long long int> > v,s,tt,pp;
    map<string, int> ma,sa;
    string ss;
    vector<long long int> vv;
    map<string, int> :: iterator it;
    vector<string> :: iterator ki;

    cin>>n>>m>>a>>b;
    if(n%m==0){
        cout<<0<<endl;
    }
    else {
        if(n>m){
            c = n-m;
            vv.push_back(c*b);
            c = ((n/m)+1)*m;
            c = c-n;
            vv.push_back(c*a);
            c = (n/m)*m;
            c = n-c;
            vv.push_back(c*b);
        }
        else if(n<m){
            c = n-0;
            vv.push_back(c*b);
            c = m-n;
            vv.push_back(c*a);
        }
        sort(vv.begin(),vv.end());
        cout<<vv[0]<<endl;
        vv.clear();
    }
    return 0;
}
