#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    deque<ll> v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    c = 0;
    d = 0;
    for(i=0;i<n;i++){
        if(i%2==0){
           if(v.back()>v.front()){c=c+v.back();v.pop_back();}
           else {c=c+v.front();v.pop_front();}
        }
        else if(i%2==1){
           if(v.back()>v.front()){d=d+v.back();v.pop_back();}
           else {d=d+v.front();v.pop_front();}
        }
    }
    cout<<c<<" "<<d<<endl;
}



