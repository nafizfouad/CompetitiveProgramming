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
    vector<string> ss,vv,pp;
    map<ll,vector<ll> > mm;
    map<ll,ll > ta,pa,ma;
    map<ll,ll > sa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    for(i=0;i<n;i++){
    cin>>a;
    ma[a] = ma[a]+a;
    }
    k = -999999;
    for(i=1;i<=100000;i++){
        ma[i] = max(ma[i]+ma[i-2],ma[i-1]);
        k = max(ma[i],k);
    }
    cout<<k<<endl;
}
