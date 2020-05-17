#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    vector<ll> v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    a = 6-max(n,m)+1;
    if(a==1){
        cout<<"1/6"<<endl;
    }
    if(a==2){
        cout<<"1/3"<<endl;
    }if(a==3){
        cout<<"1/2"<<endl;
    }if(a==4){
        cout<<"2/3"<<endl;
    }if(a==5){
        cout<<"5/6"<<endl;
    }if(a==6){
        cout<<"1/1"<<endl;
    }

}
