#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh,vv,v[200006];
vector<pair<ll,ll> > pp,ss;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            v[i+1].pb(a);
            v[i+1].pb(b);
        }
        a = v[1][0];
        b = v[1][1];
        s.pb(1);
        ma[1]=1;
        for(i=1;i<n;i++){
            c = v[a][0];
            d = v[a][1];
            if((c==b || d==b) && ma[a]==0){
                s.pb(a);
                ma[a]=1;
                a = c;
                b = d;
            }
            else {
                s.pb(b);
                ma[b]=1;
                a = v[b][0];
                b = v[b][1];
            }
        }
        for(i=0;i<n;i++)cout<<s[i]<<" ";
        cout<<endl;
    }

}
