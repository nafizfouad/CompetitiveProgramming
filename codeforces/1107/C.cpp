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

    cin>>n>>k;

    c = 0;
    d = 0;
    e = 0;
    for(j=0; j<n; j++)
    {
        cin>>a;
        v.pb(a);
    }
    cin>>st;
    b = k+1;
    for(j=0; j<n; j++)
    {
        if(st[j]==st[j+1])
        {
            c = 0;
            while(st[j]==st[j+1])
            {
                 pq.push(v[j]);
                 j++;
                if(j==n-1)break;
            }
            pq.push(v[j]);
            e = k;
            while(e>0 && pq.size()>0){
                c = c+pq.top();
                pq.pop();
                e--;
            }
            d = d+c;
            pq = aq;
        }
        else
        {
            d = d+v[j];
        }
    }
    cout<<d<<endl;

}

