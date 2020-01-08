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

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(b<=c){
            cout<<(a-b)+1<<endl;
        }
        else cout<<(a-c)+1<<endl;
    }
    return 0;
}
