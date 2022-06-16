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
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,vv;
vector< pair<ll,ll> > ss,pp,hh,rr,s;
map<ll,ll> ta,pa,sa,ma;
map< pair<pair<ll,ll>, ll>,ll >se,me;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        e = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            de.pb(a);
        }
        k = min(m-1,k);

        e = -1e18;

        for(i=0; i<=k; i++)
        {
            b = k-i;
            ne.clear();
            for(j=i; j<n-b; j++)
            {
                ne.pb(de[j]);
            }
//            for(j=0;j<ne.size();j++)cout<<ne[j]<<" ";
//            cout<<endl;
            a = m-k-1;
            d = 1e18;
            for(j=0; j<=a; j++)
            {
                b = a-j;
                // cout<<a<<" "<<b<<endl;
                c = max(ne[j],ne[ne.size()-b-1]);

                //cout<<de[i]<<" "<<de[de.size()-b-1]<<endl;

                d = min(c,d);
            }
           // cout<<d<<endl;
            e = max(d,e);
        }

        cout<<e<<endl;
        de.clear();
        ne.clear();
    }
}
