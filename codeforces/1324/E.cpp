#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<list>
#include<iterator>
#include<string.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
#define mod 1000000007
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>newset;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,hh,vv;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<ll> >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll dp[2002][2002];

ll mem(ll i,ll j)
{

    if(i==n)return 0;
    if(dp[i][j]!=-1)return dp[i][j];

    ll c,d,e,f;

    c = j+v[i];
    d = j+v[i]-1;

    if(c>=h) c= c-h;
    if(d>=h) d= d-h;

    if(c>=l && c<=r)e = 1+mem(i+1,c);
    else e = mem(i+1,c);

    if(d>=l && d<=r)f = 1+mem(i+1,d);
    else f = mem(i+1,d);

    dp[i][j] = max(e,f);

    return dp[i][j];
}

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        cin>>n>>h>>l>>r;
        f = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        g = mem(0,0);
        cout<<g<<endl;
    }

}
