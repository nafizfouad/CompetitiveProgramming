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
vector<pair<ll,ll> > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<pair<ll,ll> > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

ll ar[100006],br[100006];

void update(ll i,ll b,ll n,ll k)
{
    while(i<=n)
    {
        if(k==1)ar[i]+=b;
        if(k==2)br[i]+=b;
        i = i+(i&-i);
    }
}
ll fi(ll i,ll k)
{
    ll b = 0;
    while(i>0){
    if(k==1) b =ar[i]+b;
    if(k==2) b =br[i]+b;
    i = i-(i&-i);}
    return b;
}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;

        for(i=0; i<m; i++)
        {
            cin>>a;
            if(a==1)
            {
                cin>>c>>d;
                ma[c]++;
                sa[d]++;
               if(ma[c]==1) update(c,1,n,1);
                if(sa[d]==1) update(d,1,n,2);
            }
            else if(a==2)
            {
                cin>>c>>d;
                ma[c]--;
                sa[d]--;
                if(ma[c]==0)update(c,-1,n,1);
                if(sa[d]==0)update(d,-1,n,2);
            }
            else
            {
                cin>>l>>r>>o>>p;
                e = fi(o,1)-fi(l-1,1);
                f = fi(p,2)-fi(r-1,2);
                //cout<<e<<" "<<f<<endl;
                if(((o-l+1)==e)||((p-r+1)==f))
                {
                    cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;
            }
        }

    }
}
