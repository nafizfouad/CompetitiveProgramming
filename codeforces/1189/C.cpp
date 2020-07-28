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
    vector<ll > v,s;
    vector<ll> ss,vv,pp;
    map<ll,vector<ll> > mm;
    map<ll,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    b = 0;
    v.pb(0);
    for(i=0; i<n; i++)
    {
        cin>>a;
        b = b+a;
        v.pb(b);
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>a>>b;
        c = v[b]-v[a-1];
        d = (c/10);
        cout<<d<<endl;
    }

}
