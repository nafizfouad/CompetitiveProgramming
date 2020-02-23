#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll i,j,k,a,b,c,d,f,n,t,x,y,e;
    vector<ll> v,s;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>x>>y;
        x++;
        y++;
        c = x;
        d = y;
        if(y>b/2){
            y = y-1;
        }
        else {
            y = b-y;
        }
       int r = a*y;
        c = (abs(a-x)*b);
        if(r<c){
            r = c;
        }
        if(x>a/2){
            x = x-1;
        }
        else {
            x = a-x;
        }
        int rr,cc;
        rr = b*x;
        if(rr>r){
            cout<<rr<<endl;
        }
        else cout<<r<<endl;

    }
}
