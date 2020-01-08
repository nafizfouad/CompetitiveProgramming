#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int i,j,k,a,b,c,n,m;
    vector<int> v,s;
    cin>>a>>b;
    if(a%2==0){
        if(b>a/2){
            b = b-(a/2);
            b = b*2;
            cout<<b<<endl;
        }
        else if(b<=a/2){
            b = (b*2)-1;
            cout<<b<<endl;
        }
    }
    else{
       if(b>((a/2)+1)){
            b = b-((a/2)+1);
            b = b*2;
            cout<<b<<endl;
        }
        else if(b<=((a/2)+1)){
            b = (b*2)-1;
            cout<<b<<endl;
        }
    }
    return 0;
}
