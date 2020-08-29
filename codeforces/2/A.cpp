#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<pair<string,ll> > v,s;
    map<ll,vector<ll> > me;
    map<string,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    e = -99999999999;
    for(i=0;i<n;i++){
      cin>>st>>a;
      ma[st] = ma[st]+a;
      v.pb({st,a});
    }

    for(auto it = ma.begin();it!=ma.end();it++){
       b = (*it).second;
       e =max(e,b);
    }
    for(i=0;i<n;i++){
        st = v[i].first;
            pa[st] = pa[st]+v[i].second;
            if(pa[st]>=e && ma[st]==e){cout<<st<<endl;break;}
    }
}
