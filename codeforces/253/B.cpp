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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv;
vector<vector<pair<ll,ll> > > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<pair<ll,ll> > si,li;
newset mi;



int main()
{
    //fast;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());

        e = 1e18;
        for(i=0; i<n; i++)
        {

            auto it = upper_bound(v.begin(),v.end(),2*v[i]);

            --it;
            d = v.end()-it-1;
            e = min(e,i+d);
        }
        cout<<e<<endl;
    }
}