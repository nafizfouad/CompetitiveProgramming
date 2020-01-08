#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int i,j,k,a,b,c,m,n;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        if(n%10==0){
            n = n/10;
        }
        else {
            n = n-1;
        }
    }
    cout<<n<<endl;
    
}