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
vector<ll> ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

ll one1[1003][1003], n1[1003][1003], onem[1003][1003],nm[1003][1003];
ll ar[1003][1003];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)cin>>ar[i][j];
        }
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=m; j++)
            {
                if(i==0 || j==0)one1[i][j]=0;
                else
                {
                    one1[i][j]=max(one1[i-1][j],one1[i][j-1])+ar[i][j];
                }
            }
        }
        for(i=n+1; i>=1; i--)
        {
            for(j=m+1; j>=1; j--)
            {
                if(i==n+1 || j==m+1)nm[i][j]=0;
                else
                {
                    nm[i][j]=max(nm[i+1][j],nm[i][j+1])+ar[i][j];
                }
            }
        }
        for(i=n+1; i>=1; i--)
        {
            for(j=0; j<=m; j++)
            {
                if(i==n+1 || j==0)n1[i][j]=0;
                else
                {
                    n1[i][j]=max(n1[i+1][j],n1[i][j-1])+ar[i][j];
                }
            }
        }


            for(i=0; i<=n; i++)
            {
                for(j=m+1; j>=1; j--)
        {
                if(i==0 || j==m+1)onem[i][j]=0;
                else
                {
                    onem[i][j]=max(onem[i-1][j],onem[i][j+1])+ar[i][j];
                }
            }
        }
        p = 0;
        for(i=2; i<n; i++)
        {
            for(j=2; j<m; j++)
            {
                p = max(p, one1[i-1][j]+nm[i+1][j]+onem[i][j+1]+n1[i][j-1]);
                p = max(p, one1[i][j-1]+nm[i][j+1]+onem[i-1][j]+n1[i+1][j]);
            }
        }
        cout<<p<<endl;
    }
}

