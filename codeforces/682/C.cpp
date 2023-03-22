#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh,vv,v[100006];
vector<pair<ll,ll> > pp,ss;
map<ll,vector<ll> > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll vi[100006],ar[100006],br[100006],cr[100006];

ll bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;

    q.push(a);
    vi[a] = 1;
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                vi[v[d][i]]= 1;

                e = me[{d,v[d][i]}];
                ar[v[d][i]]=ar[d]+e;
                if(e<=0)br[v[d][i]]+=br[d]+abs(e);
                else br[v[d][i]]+=br[d]-e;
                cr[v[d][i]]=max(br[v[d][i]],cr[d]);
                if(cr[v[d][i]]>0)ar[v[d][i]]+=cr[v[d][i]];
                if(ar[v[d][i]]<=s[v[d][i]-1])f++,q.push(v[d][i]);
                if(cr[v[d][i]]>0)ar[v[d][i]]-=cr[v[d][i]];
            }
        }
        q.pop();
    }

    return f;
}


int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            s.pb(a);
        }
        for(i=0;i<n-1;i++){
            cin>>a>>b;
            v[a].pb(i+2);
            v[i+2].pb(a);
            me[{a,i+2}]=b;
            me[{i+2,a}]=b;
        }
        x=bfs(1);
        cout<<n-(x+1)<<endl;
    }

}
