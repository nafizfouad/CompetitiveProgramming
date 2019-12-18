#include<bits/stdc++.h>
using namespace std;
int main()
{


  long long int i,j,k,a,b,c,d,f,r,e,h,l,o,t,sum;
    vector<int> v,s;
    cin>>a>>b>>c;
    f = 0;
    sum = 0;
    for(i=1; i<=c; i++)
    {
        sum = sum+(a*i);
    }
    if(sum<=b){
        cout<<0<<endl;
    }
    else {
        cout<<sum-b<<endl;
    }

    return 0;
}
