#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z;
    ld aa,bb,cc;
    vector<pair<ll,ll> > v,s;
    vector<ll> vv;
    vector<string> vs;
    map<ll,ll> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c = 0;
    for(i=0;i<n;i++){
        cin>>a;
        c = c+a;
        v.pb({a,i+1});
    }
    sort(v.begin(),v.end());
  for(i=0;i+1<n;i++)
  {
       a = v[i].first;
       b = v[i].second;
       c = c-a;
       c = c-v[n-1].first;
       if(c==v[n-1].first){
        vv.pb(b);
       }
       c = c+v[n-1].first+a;
    }
    c = c-v[n-1].first;
     c = c-v[n-2].first;
     if(c==v[n-2].first)vv.pb(v[n-1].second);
     cout<<vv.size()<<endl;
     for(i=0;i<vv.size();i++)cout<<vv[i]<<" ";
     cout<<endl;
}

