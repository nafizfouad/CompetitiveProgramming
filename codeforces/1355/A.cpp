#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    vector<ll> v,s,vv,ss;
    map<ll,ll> ma,sa;
    map<ll,ll> :: iterator it,ki;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        c = a;
        if(b==1){cout<<a<<endl;}
        else {
        for(j=1;j<b;j++){
                f = c;
            while(c){
                d = c%10;
                ma[d]++;
                c= c/10;
            }
            it = ma.begin();
            d = (*it).first;
            ki = --ma.end();
            e = (*ki).first;
            e = d*e;
            c = f+e;
            ma.clear();
            if(d==0){break;}
        }
        cout<<c<<endl;}
    }
}
