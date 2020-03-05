#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


    ll a,b,c,n,d,f,m,x1,x2,y2,y1,x3,x4,y3,y4;
    int i,j,k,t;
    vector<int> v,s;
    vector<int> :: iterator it,ki;
    cin>>t;
    b = 999999999;
    c = -99999999;
    for(i=1; i<=t;i++){
        cin>>a;
        if(a<=b){
            b = a;
            f = i;
        }
        if(a>c){
            c = a;
            m = i;
        }
        v.push_back(a);
    }
    if(f<m){
            cout<<((t-f)+abs(m-1))-1<<endl;
    }
   else cout<<((t-f)+abs(m-1))<<endl;

    return 0;
}
