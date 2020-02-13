#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll i,j,k,a,b,c,n,t,f,m,l;
    vector<ll> v,s;
    string st,vt;
    cin>>n;
    if(n%2==0)
    {
        cout<<((n*n)/4)*2<<endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i%2==1 && j%2==1){
                    cout<<'C';
                }
                else if(i%2==0 && j%2==0){
                    cout<<'C';
                }
                else cout<<'.';
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<(((n+1)/2)*((n+1)/2)+((n-1)/2)*((n-1)/2))<<endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i%2==1 && j%2==1){
                    cout<<'C';
                }
                else if(i%2==0 && j%2==0){
                    cout<<'C';
                }
                else cout<<'.';
            }
            cout<<endl;
        }
    }

}
