#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,x,y;
    vector<ll > vv,ss,v,s;
    string st,et;
    map<ll,ll > pa,ea,ma;
    cin>>a;
    long double bb;
    bb  = 1;
    f  = 0;
    for(i=1;i<=a;i++){
        cin>>c;
        v.push_back(c);

    }
    sort(v.begin(),v.end());
    for(i=0;i<a;i++){
        bb = bb*v[i];
        if(bb>1000000000000000000){f=1;break;}
    }
    if(f==0){
        c = bb/1;
        cout<<c<<endl;
    }
    else cout<<-1<<endl;
}
