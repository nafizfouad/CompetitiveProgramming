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
vector<ll> v,s,ar[12][103][103];
vector< pair< pair<ll,ll>,pair<ll,ll> > > ss,pp,vv,hh;
map<ll,ll > ta,pa,sa,ma;
map< pair<pair<ll,ll>, ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll br[103][103],cr[12][103][103];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>q>>c;
        for(i=0; i<n; i++)
        {
            cin>>a>>b>>d;
            ar[0][a][b].pb(d);
            br[a][b]=1;
        }
        for(i=0; i<q; i++)
        {
            cin>>a>>b>>d>>e>>f;
            ss.pb({{b,d},{e,f}});
            v.pb((a%(c+1)));
        }
        for(i=1; i<=c; i++)
        {
            for(j=1; j<=100; j++)
            {
                for(k=1; k<=100; k++)
                {
                    if(br[j][k]==1)
                    {
                        for(h=0; h<ar[i-1][j][k].size(); h++)
                        {
                            b = 1+ar[i-1][j][k][h];
                            if(b>c)b=0;
                            ar[i][j][k].pb(b);

                        }
                    }
                }
            }
        }
        for(i=0; i<=c; i++)
        {
            for(j=1; j<=100; j++)
            {
                for(k=1; k<=100; k++)
                {
                    o = 0;
                    for(h=0; h<ar[i][j][k].size(); h++)
                    {
                        o = o+ar[i][j][k][h];
                    }
                    cr[i][j][k] = cr[i][j][k-1]+o;
                }
                //cout<<endl;
            }
            //cout<<endl;
        }
        for(i=0; i<q; i++)
        {
            a = ss[i].first.first;
            b = ss[i].first.second;
            d = ss[i].second.first;
            e = ss[i].second.second;
            x = v[i];
            l = 0;
            for(j=a; j<=d; j++)
            {
                l = l+cr[x][j][e]-cr[x][j][b-1];
            }
            cout<<l<<endl;
        }
    }
}
