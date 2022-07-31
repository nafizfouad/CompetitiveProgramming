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
vector<ll> s,v,vv;
vector<pair<ll,ll > > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de[5],ne;
set<ll > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

ll ar[100006];

ll bigmod(ll a,ll b,ll c)
{

    long long int i,j,k;
    if(b==0)
    {
        return 1%c;
    }
    j = bigmod(a,b/2,c);
    j = (j*j)%c;
    if(b%2==1)
    {
        j=(j*a)%c;
    }
    return j;
}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;

        f = 0;
        d = 0;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            ma[a] = i;

        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
            sa[a] = i;
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a!=0)ss.pb({a,i});
        }
        for(i=0; i<ss.size(); i++)
        {
            a = ss[i].first;
            b = ss[i].second;

            if(ar[a]==0)
            {
                while(ar[a]==0)
                {
                    ar[a] = 1;
                    if(v[b]==a)
                    {
                        a = s[b];
                        b = ma[a];
                    }
                    else a = v[b], b = sa[a];
                }
            }
        }
        c = 0;
        for(i=1; i<=n; i++)
        {
            a = i;
            b = ma[a];
            if(ar[a]==0 && ma[a]!=sa[a])
            {
                c++;
                while(ar[a]==0)
                {
                    ar[a] = 1;
                    if(v[b]==a)
                    {
                        a = s[b];
                        b = ma[a];
                    }
                    else a = v[b], b = sa[a];
                }
            }
        }
        for(i=0;i<n+3;i++)ar[i]=0;
        cout<<bigmod(2,c,mod)<<endl;
        v.clear();
        ss.clear();
        s.clear();
        ma.clear();
        sa.clear();

    }
}
