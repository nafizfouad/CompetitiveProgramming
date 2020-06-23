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
    vector<ll > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>st;
        b = 0;
        c = 0;
        et.clear();
        for(i=0;i<n;i++){
            if(st[i]=='1')break;
            else et.pb(st[i]);
        }
        for(i=1; i<n; i++)
        {
            if(st[i]=='0' && st[i-1]=='1'){et.pb('0');break;}
        }
        for(i=n-1;i>=0;i--){
            if(st[i]=='0'){break;}
            else et.pb('1');
            if(i==0)break;
        }
        cout<<et<<endl;
        et.clear();
    }



}

