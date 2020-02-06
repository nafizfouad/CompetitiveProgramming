#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,b,c,n,t,m;
    vector<long long int> v,s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        int f = 0;
        t = 0;
        for(j=1;j<=a;j++){
            cin>>b;
            if(b%2==1){f++;}
            else{
                t++;
            }
        }
        if(f%2==1){
            cout<<"YES"<<endl;
        }
        else if(f==0){
            cout<<"NO"<<endl;
        }
        else{
            if(f>0 && t>0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }

}
