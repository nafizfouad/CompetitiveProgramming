#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<pair<ll,ll> > v,s;
    vector<string> ss,vv,pp;
    map<ll,vector<ll> > mm;
    map<pair<ll,ll>, ll > ta,pa,ma;
    map<ll,ll > sa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    v.pb({0,0});
    for(i=0;i<n;i++){
    cin>>a>>b;
    v.pb({a,b});
    }
    e = 0;
    d = 0;
    for(i=1;i<v.size();i++){
        c = min(v[i].first,v[i].second);
        d = max(v[i-1].first,v[i-1].second);
        if(d<=c)e = e+(c-d)+1;
        if(v[i-1].first==v[i-1].second  && i>1)e--;
    }
    cout<<e<<endl;
}
