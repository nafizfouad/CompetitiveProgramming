#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<set>
#include<string.h>
#include<stdio.h>
#include<math.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o,mi;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<pair<ll,ll> > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    b = 1;

    for(i=1;i<=n;i++){
        b = b*2;
    }
    for(i=1;i<=b;i++){
        cin>>a;
        v.pb({a,i});
    }
    if(b==2)goto xx;
    for(i=0;i<b;i=i+2){
        if(v[i].first>v[i+1].first){
            s.pb(v[i]);
        }
        else s.pb(v[i+1]);
        if(i==b-2){
            b = b/2;
            i=-2;
            v.clear();
            v = s;
            s.clear();
        }
        if(v.size()==2)break;
    }
    xx:
    if(v[0].first<v[1].first)cout<<v[0].second<<endl;
    else cout<<v[1].second<<endl;
}
