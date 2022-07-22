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

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll pr(ll n, ll r)
{

    ll p = 1, l = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            l *= r;

            x = __gcd(p, l);

            p /= x;
            l /= x;

            n--;
            r--;
        }
    }

    else
        p = 1;

    return p;
}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;

        for(i=4; i<k; i++)
        {
         //   cout<<i<<" "<<k-i<<endl;
           if(i<=n && k-i<=m) d = d+(pr(n,i)*pr(m,k-i));
        }
        //cout<<c<<" "<<d<<endl;

        cout<<d<<endl;
    }
}
