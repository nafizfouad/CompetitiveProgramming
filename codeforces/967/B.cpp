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

int main()
{
    fast;
    // cin>>t;
    while(t--)
        {
            cin>>n>>m>>k;
            for(i=1; i<=n; i++)
                {
                    cin>>a;
                    d = d+a;
                    if(i==1)
                        c=a;
                    else
                        v.pb(a);
                }
            sort(v.begin(),v.end());
            b = (c*m)/d;
            if(b>=k)
                {
                    cout<<0<<endl;
                    continue;
                }
            for(i=v.size()-1; i>=0; i--)
                {
                    e++;
                    d = d-v[i];
                    b = (c*m)/d;
                    if(b>=k)
                        {
                            cout<<e<<endl;
                            break;
                        }
                }
        }
}

