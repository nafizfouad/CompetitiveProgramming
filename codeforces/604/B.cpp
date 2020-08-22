#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s,vv;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    d = k*2;
    c = d-n;
    if(n==1){cout<<v[0]<<endl;return 0;}
    for(i=0;i+c<n;i++){
        s.pb(v[i]);
    }
    for(i=0,j=s.size()-1;i<s.size()/2;j--,i++){
        c=s[i]+s[j];
        vv.pb(c);
    }
    vv.pb(v[n-1]);
    sort(vv.begin(),vv.end());
    cout<<vv[vv.size()-1]<<endl;
}
