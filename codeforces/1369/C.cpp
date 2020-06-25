#include<bits/stdc++.h>
#define ll long long int
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
        cin>>n>>k;
        b = 0;
        c = 0;

        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
        }
        m = 0;
        for(i=0; i<k; i++)
        {
            cin>>b;
            if(b!=1)v.pb(b-1);
            else m++;
        }
        sort(s.begin(),s.end());
        p = n-1;
        d = 0;
        for(j=0; j<m; j++)
        {
            d = d+(s[p]*2);
            p--;
        }
       if(v.size()>0) sort(v.begin(),v.end(),greater<ll>());
       i=0;
        for(j=0; j<v.size(); j++,p--)
        {
           d = d+s[p];
           for(g=1;g<=v[j];g++,i++){
            if(g==1)d=d+s[i];
           }
        }
        cout<<d<<endl;
        vv.clear();
        s.clear();
        v.clear();
    }
}

