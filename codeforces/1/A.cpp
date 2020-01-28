#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,b,c,n,t,r,d;
    cin>>a>>b>>t;
    n = 0;
    c = b/t;
    if(b%t!=0)
    {
        c++;
    }
    n = n+c;
    d = a-t;
    if(d>0)
    {
     r = d/t;
     if(d%t!=0){
        r++;
     }
     n = n+(c*r);
    }
    cout<<n<<endl;
}
