#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc;
    vector<ll > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    cin>>st;
    st = "h"+st;
    c = 0;
    for(i=1; i<=n; i++)
    {
        if(i%3==1){
            if(st[i]!='R')c++;
            et.pb('R');
        }
        if(i%3==2){
             if(st[i]!='G')c++;
             et.pb('G');
        }
        if(i%3==0){
             if(st[i]!='B')c++;
             et.pb('B');
        }
    }
    ma[c] = et;
    et.clear();

     c = 0;
    for(i=1; i<=n; i++)
    {
        if(i%3==1){
            if(st[i]!='R')c++;
            et.pb('R');
        }
        if(i%3==2){
             if(st[i]!='B')c++;
             et.pb('B');
        }
        if(i%3==0){
             if(st[i]!='G')c++;
             et.pb('G');
        }
    }
    ma[c] = et;
    et.clear();

     c = 0;
    for(i=1; i<=n; i++)
    {
        if(i%3==1){
            if(st[i]!='B')c++;
            et.pb('B');
        }
        if(i%3==2){
             if(st[i]!='G')c++;
             et.pb('G');
        }
        if(i%3==0){
             if(st[i]!='R')c++;
             et.pb('R');
        }
    }
    ma[c] = et;
    et.clear();

     c = 0;
    for(i=1; i<=n; i++)
    {
        if(i%3==1){
            if(st[i]!='B')c++;
            et.pb('B');
        }
        if(i%3==2){
             if(st[i]!='R')c++;
             et.pb('R');
        }
        if(i%3==0){
             if(st[i]!='G')c++;
             et.pb('G');
        }
    }
    ma[c] = et;
    et.clear();

     c = 0;
    for(i=1; i<=n; i++)
    {
        if(i%3==2){
            if(st[i]!='R')c++;
            et.pb('R');
        }
        if(i%3==1){
             if(st[i]!='G')c++;
             et.pb('G');
        }
        if(i%3==0){
             if(st[i]!='B')c++;
             et.pb('B');
        }
    }
    ma[c] = et;
    et.clear();

     c = 0;
    for(i=1; i<=n; i++)
    {
        if(i%3==0){
            if(st[i]!='R')c++;
            et.pb('R');
        }
        if(i%3==1){
             if(st[i]!='G')c++;
             et.pb('G');
        }
        if(i%3==2){
             if(st[i]!='B')c++;
             et.pb('B');
        }
    }
    ma[c] = et;
    et.clear();
    auto it = ma.begin();
    ft = (*it).second;
    a = (*it).first;
    cout<<a<<endl;
    cout<<ft<<endl;
}

