#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;


    cin>>t;
    if(t==1){
        cout<<9<<" "<<8<<endl;
    }
    else if(t==2){
        cout<<6<<" "<<4<<endl;
    }
   else if(t%2==0){
        cout<<t*2<<" "<<t<<endl;
    }
    else if(t%2==1){
        cout<<t*3<<" "<<t*2<<endl;
    }
    return 0;
}
