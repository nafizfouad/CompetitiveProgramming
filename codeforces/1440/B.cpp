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
    map<pair<ll,ll>,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>k;
        v.clear();
        for(j=0;j<n*k;j++){
            cin>>a;
            v.pb(a);
        }
        b = n/2;
        if(n%2==1)b++;
        c = n-b;
        d = 0;
        for(j=1,l=v.size()-1;l>=0 && j<=k;j++,l--){
            l = l-c;
            d = d+v[l];
        }
        cout<<d<<endl;
    }
}
