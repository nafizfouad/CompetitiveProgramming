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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv[200004],rr;
vector<pair<pair<ll,ll>,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<pair<ll,ll> >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

ll ar[200104];
void update(ll j,ll b,ll n)
{

        ll e = j;
        while(e<=n){
          ar[e]=ar[e]+b;
          e = e+(e&-e);
        }

}
ll fi(ll j)
{
    ll b = 0;
        ll e = j;
        while(e>0){
          b =ar[e]+b;
          e = e-(e&-e);
        }
    return b;
}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<n; i++)
        {
            a = v[i];
            vv[i].pb(a);
            while(a>=10)
            {
                c = 0;
                while(a)
                {
                    b = a%10;
                    c = c+b;
                    a = a/10;
                }
                vv[i].pb(c);
                a = c;
            }
        }
        for(i=0;i<m;i++){
            cin>>a;
            if(a==1){
                cin>>b>>c;
                update(b,1,n+3);
                update(c+1,-1,n+3);
            }
            else{
                cin>>b;
                d = fi(b);
                if(d==0)cout<<v[b-1]<<endl;
                else if(d>=vv[b-1].size())cout<<vv[b-1][vv[b-1].size()-1]<<endl;
                else cout<<vv[b-1][d]<<endl;
            }
        }
        for(i=0;i<=n+5;i++)ar[i]=0,vv[i].clear();
        v.clear();
    }
}
