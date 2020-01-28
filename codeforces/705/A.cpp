#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,m;
    vector<int> v,s;
    string ss,vv;
    cin>>a;
    ss = "";
    if(a%2==0){
        for(i=1;i<a;i++){
            if(i%2==1){
                ss = ss+"I hate that ";
            }
            else if(i%2==0){
                ss = ss+"I love that ";
            }
        }
        ss = ss+"I love it";
        cout<<ss<<endl;
    }
    else if(a%2==1){
        for(i=1;i<a;i++){
            if(i%2==1){
                ss = ss+"I hate that ";
            }
            else if(i%2==0){
                ss = ss+"I love that ";
            }
        }
        ss = ss+"I hate it";
        cout<<ss<<endl;
    }
    return 0;
}
