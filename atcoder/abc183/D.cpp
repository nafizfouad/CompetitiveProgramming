#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<string.h>
#include<stdio.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    vector< pair<ll,ll> > ss;
    map<ll,vector<ll> > me;
    map<pair<ll,ll >,ll > pa,ta,sa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll ar[200005];
    memset(ar,0,sizeof ar);
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        ar[a]+=c;
        ar[b]-=c;
    }
    f = 0;
    if(ar[0]>m)f=1;
    for(i=1;i<=200000;i++){
        ar[i] = ar[i]+ar[i-1];
        if(ar[i]>m){f=1;break;}
    }
    if(f==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

