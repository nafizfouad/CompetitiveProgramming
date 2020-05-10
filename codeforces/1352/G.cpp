#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<pair<ll,ll> > v,s,vv,ss;
    map<ll,string> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=n; i++)
    {
       cin>>a;
       if(a<4){cout<<-1<<endl;}
       else if(a==4)cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
       else{
        if(a%2==0){c=a-4;}
        else c=a-3;
        for(j=2;j<=a;j=j+2){
            if(j!=c)cout<<j<<" ";
        }
        cout<<c<<" ";
        if(a%2==0)j=a-1;
        else j=a;
        for(k=j;k>=1;k=k-2){
            cout<<k<<" ";
        }
        cout<<endl;
       }
    }


}



