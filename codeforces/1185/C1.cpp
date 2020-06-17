#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    vector<ll > v,s,vv;
    vector<ll> aa;
    map<ll,ll> ma,sa,ta;
    map<ll,ll> :: iterator it,ki;
    priority_queue<ll> pq,aq,tq;
    // priority_queue<ll,vector<ll>,greater<ll> > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    p=0;
    for(i=0; i<n; i++)
    {
        c = c+v[i];
        if(c<=m)
        {
            s.pb(0);
            pq.push(v[i]);
            aq.push(v[i]);
        }
        else
        {
            d = c-m;
            t = 0;
            p = 0;
            while(p<d)
            {
                a = pq.top();
                p = p+a;
                t++;
                pq.pop();
            }
            s.pb(t);
            aq.push(v[i]);
            pq = aq;
        }
    }
    for(i=0; i<n; i++)cout<<s[i]<<" ";
}
