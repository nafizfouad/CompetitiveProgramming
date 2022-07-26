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
vector<ll > s,v,vv[100006];
vector<vector<pair<ll,ll> > > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<pair<ll,ll> > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

ll ar[1000005],br[1000006];

void sieve()
{

    for(i=4; i<=1000002; i=i+2)
    {
        ar[i]=1;
    }
    for(i=3; i*i<=1000002; i=i+2)
    {
        if(ar[i]==0)
        {
            for(j=i*i; j<=1000002; j=j+(2*i))
            {
                ar[j] = 1;
            }
        }
    }
    for(i=2; i<=1000002; i++)
    {
        if(ar[i]==0)br[i] = 1;
    }

}

int main()
{
    fast;

    sieve();

    cin>>t;

    while(t--)
    {

        cin>>n>>m;
        d = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            //if(br[a])cout<<a<<endl;
            v.pb(a);
        }
        d = 0;
        for(i=0;i<m;i++){
                p = 0;
                c = 0;
                e = 0;
            for(j=i;j<n;j=j+m){
                if(v[j]==1){
                    c++;
                    if(p==1)d++;
                }
                else if(br[v[j]]==1){
                    d = d+c;
                    d = d+(c*e);
                    p = 1;
                    e = c;
                    c = 0;
                }
                else d = d+(c*e), c = 0, p = 0, e = 0;
            }
            d = d+(e*c);
        }
        cout<<d<<endl;
        v.clear();
    }
}
