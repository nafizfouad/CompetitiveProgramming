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
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de[5],ne;
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

        ll ar[505][505];
        cin>>n>>m>>k;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>ar[i][j];
            }
        }
        for(i=0; i<k; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        for(i=1; i<=n; i++)
        {
            e = 0;
            for(j=1; j<=m; j++)
            {
                if(ar[i][j]==1)
                {
                    c = 0;
                    while(ar[i][j]==1)
                    {
                        j++;
                        c++;
                        if(j>m)break;
                    }
                    e = max(e,c);

                }
            }
            ma[i] = e;
        }
        for(i=0; i<k; i++)
        {
            a= ss[i].first;
            b = ss[i].second;
            
            if(ar[a][b]==0)ar[a][b]=1;
            else ar[a][b]=0;
            
            d = 0;
            e = 0;
            
            for(j=1; j<=m; j++)
            {
                if(ar[a][j]==1)
                {
                    c = 0;
                    while(ar[a][j]==1)
                    {
                        j++;
                        c++;
                        if(j>m)break;
                    }
                    e = max(e,c);
                }
            }
            ma[a] = e;
            for(j=1; j<=n; j++)d = max(d,ma[j]);
            cout<<d<<endl;
        }
    }
}
