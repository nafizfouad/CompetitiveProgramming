#include<bits/stdc++.h>
#define ll unsigned long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
    vector<string > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4==0)
        {
            cout<<n/4<<endl;
        }
        if(n%4==1)
        {
            if(n>=9){b = ((n-9)/4)+1;cout<<b<<endl;}
            else cout<<-1<<endl;
        }
        if(n%4==2)
        {
            if(n>=6){b = ((n-6)/4)+1;cout<<b<<endl;}
            else cout<<-1<<endl;
        }
        if(n%4==3)
        {
            if(n>=15){b = ((n-15)/4)+2;cout<<b<<endl;}
            else cout<<-1<<endl;
        }
    }


}

