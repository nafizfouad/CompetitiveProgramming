#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    ld aa,bb,cc;
    vector<ll > v,s,vv;
    map<char,char> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        c = 0;
        d = 0;
        b = 0;
        for(i=0;i<n;i++){
            pq.push(v[i]);
            c = c+v[i];
            if(c>m){
                b = pq.top();
              //  if(b<v[i])b=0;
                break;
            }
        }
        if(b==0)cout<<0<<endl;
        else{
        for(i=0;i<n;i++){
            if(v[i]==b){cout<<i+1<<endl;break;}
        }}
        v.clear();
        pq = aq;
    }


}

