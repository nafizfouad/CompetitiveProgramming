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
    vector<ll > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll > > mm;
    map<ll, ll> ta,ma,pa,sa;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> sta,pta;
    list<ll> di,li;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        for(j=0;j<n;j++){
            cin>>a;
            v.pb(a);
        }
        cin>>m;
        for(j=0;j<m;j++){
            cin>>a;
            s.pb(a);
        }
        c = 0;
        d = 0;
        for(j=0;j<n;j++){
           c = c+v[j];
           d = max(c,d);
        }
        c = 0;
        e = 0;
        for(j=0;j<m;j++){
           c = c+s[j];
           e = max(c,e);
        }
        cout<<e+d<<endl;
        v.clear();
        s.clear();
    }
}
