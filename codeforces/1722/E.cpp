#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<pair<ll,ll>, pair<ll,ll> > > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >li,si;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

ll ar[1004][1004];

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            ar[a][b]+=a*b;
        }

        for(i=0; i<m; i++)
        {
            cin>>a>>b>>c>>d;
            ss.pb({{a,b},{c,d}});
        }
        for(i=0;i<=1000;i++){
            for(j=1;j<=1000;j++)ar[i][j]+=ar[i][j-1];
        }
        for(i=0; i<m; i++)
        {
            a = ss[i].first.first;
            b = ss[i].first.second;
            c = ss[i].second.first;
            d = ss[i].second.second;
            p = 0;
            for(j=a+1;j<c;j++){
                p = p+ar[j][d-1]-ar[j][b];
            }
            cout<<p<<endl;
        }
        for(i=0;i<=1000;i++){
            for(j=0;j<=1000;j++)ar[i][j]=0;
        }
        ss.clear();
    }
}

