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
    vector<ll > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll> > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
       cin>>n>>m>>r>>c;
       a = (r-1)+(c-1);
       b = (n-r)+(m-c);
       e = (n-r)+(c-1);
       d = (r-1)+(m-c);
       a = max(a,b);
       b = max(a,e);
       d = max(b,d);
       cout<<d<<endl;
    }
}
