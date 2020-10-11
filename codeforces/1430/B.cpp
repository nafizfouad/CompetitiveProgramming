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
    vector<ll > v,vv,s;
    vector<ll> ss,pp;
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        c = 0;
        for(j=n-2,m=1;m<=k && j>=0;m++,j--){
            if(v[j]==0)break;
            c = c+v[j];
            d = v[j];
        }
        v[n-1] = v[n-1]+c;
        v[0] = 0;
        cout<<v[n-1]-v[0]<<endl;
        v.clear();
    }
    return 0;
}
