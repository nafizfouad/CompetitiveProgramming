#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<vector<ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main() {
    fast;
   // cin>>t;
    while(t--) {
        cin>>n>>m;
        cin>>l>>r;
        if(n>m)swap(n,m);
        v.pb(n);
k = r;
        for(i=1; i+1<l; i++) {
            c = v[i-1]+r;
            if(c>m) {
                d = l-i-1;
                e = c-m;
                f = e/r;
                if(e%r!=0)f++;
               // cout<<f<<" "<<d<<" "<<i<<endl;
                if(f>d) {
                    while(f>d) {
                        r--;
                        c = v[i-1]+r;
                        if(c<=m)break;
                        e = c-m;
                        f = e/k;
                        if(e%k!=0)f++;
                       // cout<<f<<" "<<d<<" "<<e<<" "<<c<<" "<<r<<endl;
                    }
                    v.pb(c);
                    for(j=i+1;j+1<l;j++){
                v.pb(v[j-1]-k);
            }
            break;
                }
                else v.pb(c);
            }
            else v.pb(c);

        }
        v.pb(m);
c=0;
        for(i=0; i<l; i++) {
        // cout<<v[i]<<endl;
         c = c+v[i];
        }
        cout<<c<<endl;
        v.clear();
    }
}

