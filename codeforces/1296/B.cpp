#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double i,j,k,a,b,c,n;
    long long int t,m;
    vector<long long int> v,s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a<10){
                t = a;
            cout<<t<<endl;
        }
        else{
            b = a/9.0;
            m = a;
            b = b*10.0;
            t = b/1;
            if(m%9==0){
                t = t-1;
            }
            cout<<t<<endl;
        }
    }

}
