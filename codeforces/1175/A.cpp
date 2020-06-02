#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,x,y;
    string st,et,ft;
    vector<ll > vv,v,s;
    map<ll,ll > pa,ea,ma;
    long double bb,cc,aa;
    cin>>n;
    for(j=0; j<n; j++)
    {
        cin>>a>>b;
        c = 0;
        if(b==1)cout<<a<<endl;
        else{
           while(a)
        {
            if(a<b)
            {
                c=c+(a%b);
                break;
            }
            c = c+(a%b);
            a = a/b;
            c++;
        }
        cout<<c<<endl; 
        }
        
    }
}
