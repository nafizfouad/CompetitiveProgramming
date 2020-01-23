#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,n,t;
    vector<long long int> v,s;
    cin>>a;
    if(a==1){
        cout<<-1<<endl;
    }
   else if(a%2==0){
        cout<<a<<" "<<2<<endl;
    }
    else {
        cout<<a-1<<" "<<2<<endl;
    }
    return 0;
}