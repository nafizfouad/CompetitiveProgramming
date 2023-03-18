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
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,w,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > v,s,vv;
vector< pair< pair<ll,ll>,pair<ll,ll> > > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map< pair<pair<ll,ll>, ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > mi,si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{

    fast;

   // cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<n;i++){
            cin>>a;
            s.pb(a);
        }
        sort(s.begin(),s.end());
        for(i=0;i<n;i++){
            v[i] = v[i]*(i+1)*(n-i);
        }
        sort(v.begin(),v.end());
        for(i=0,j=n-1;i<n;i++,j--){
            c = (c+(((v[i]%mod)*s[j])%mod))%mod;
        }
        cout<<c<<endl;
    }
}