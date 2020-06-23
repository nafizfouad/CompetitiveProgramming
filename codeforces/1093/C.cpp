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
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);

    cin>>n;

    c = 0;
    d = 0;
    e = n/2;
    for(j=0; j<e; j++)
    {
        cin>>a;
        v.pb(a);
    }
    s.pb(0);
    s.pb(v[0]);
    b = v[0];
    c = 0;
    for(j=1; j<n/2; j++)
    {
        if(v[j]<=b){
           s.pb(c);
           s.pb(v[j]-c);
           b = v[j]-c;
        }
        else{
            e = v[j]-b;
            if(e<c){
                s.pb(c);
                s.pb(v[j]-c);
                b = v[j]-c;
            }
            else{
                s.pb(b);
                s.pb(e);
                c = e;
            }
        }
    }
    sort(s.begin(),s.end());
    for(i=0;i<n;i++)cout<<s[i]<<" ";
    cout<<endl;
}

