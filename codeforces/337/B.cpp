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
vector<pair<ll,ll> > ss,pp,hh;
map<string,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<pair<ll,ll> > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {

        cin>>n>>m>>c>>d;

       // while(n<c || m<d)n=

        a = __gcd(n,c);

        l = (n*c)/a;

        b = l/n;

        o = l/c;

        r = b*m;
        e = o*d;

        if(r>=e){
            x = l*r;
            y = l*e;

            u = __gcd(x,y);

            x = x/u;
            y = y/u;
            ss.pb({y,x});
        }

        a = __gcd(m,d);

        l = (d*m)/a;

        b = l/m;

        o = l/d;

        r = b*n;
        e = o*c;

        if(r>=e){
            x = l*r;
            y = l*e;

            u = __gcd(x,y);

            x = x/u;
            y = y/u;
            ss.pb({y,x});
        }

        if(ss.size()==1){
            cout<<ss[0].second-ss[0].first<<"/"<<ss[0].second<<endl;
        }
        else{
            aa = (ss[0].first*1.0)/(ss[0].second*1.0);
            bb = (ss[1].first*1.0)/(ss[1].second*1.0);
            if(aa>bb)cout<<ss[0].second-ss[0].first<<"/"<<ss[0].second<<endl;
            else cout<<ss[1].second-ss[1].first<<"/"<<ss[1].second<<endl;
        }
    }
}
