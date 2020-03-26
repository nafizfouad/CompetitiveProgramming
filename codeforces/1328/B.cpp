#include<bits/stdc++.h>
using namespace std;
int main(){

long long int a,b,d,n,t,f,i,j,k,e,ac,am;
long double c,m,cc,mm;
vector<long long int> v,s;
string st,ss;
cin>>t;
for(i=1;i<=t;i++){
    cin>>n>>k;
    b = (n*(n-1))/2;
    c = (- 1 + sqrt(1+(4*2*b*1.0)))/2.0;
    cc = (- 1 - sqrt(1+(4*2*b*1.0)))/2.0;
    //cout<<fmod(c,2)<<endl;
    if(fmod(c,2)!=0.0 && fmod(c,2)!=1.0){
        cc = abs(cc);
         ac = cc/1;
    }
    else{
        ac = c/1;
    }
    m = (- 1 + sqrt(1+(4*2*k*1.0)))/2.0;
    mm = (- 1 - sqrt(1+(4*2*k*1.0)))/2.0;
    if(fmod(m,2)!=0.0 && fmod(m,2)!=1.0){
        mm = abs(mm);
         am = mm/1;
    }
    else{
        am = m/1;
    }
   // cout<<cc<<endl;

    //cout<<m<<endl;
    a = (am*(am+1))/2;
    //cout<<c<<" "<<cc<<" "<<m<<" "<<mm<<" "<<ac<<" "<<am<<endl;
    d = a-k;
    //  d majkhane
    e = ac-am;
    f= d+e;
    f = (n-2)-(d+e);
    //cout<<e<<" "<<d<<" "<<f<<endl;
    for(j=1;j<=e;j++){
        cout<<"a";
    }
    cout<<"b";
    for(j=1;j<=d;j++){
        cout<<"a";
    }
    cout<<"b";
        for(j=1;j<=f;j++){
            cout<<"a";
        }
    cout<<endl;
}
}
