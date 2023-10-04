/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 998244353
#define mod1 1000000009
#define cl clear()
#define con continue
//#define endl '\n'
#define MAXN 200003
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v[200005];
vector<pair<ll,pair<ll,ll> > > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,pair<ll,ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
//set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll vi[200005],ar[200005],br[200005],lv[200006],vl[200006],pr[200005];
newset si;

ll dfs(ll d)
{
    vi[d] = 1;


    for(ll i=0; i<v[d].size(); i++)
    {
        //cout<<v[d][i]<<" "<<vi[v[d][i]]<<endl;
        if(vi[v[d][i]]==0)
        {
            ar[v[d][i]]+=ar[d]+me[ {d,v[d][i]}].first;
            br[v[d][i]]+=br[d]+me[ {d,v[d][i]}].second;
            si.insert(br[v[d][i]]);
            ma[br[v[d][i]]]++;
            ll e = si.order_of_key(ar[v[d][i]]);
            pr[v[d][i]]=e+ma[ar[v[d][i]]];
            dfs(v[d][i]);
            si.erase(br[v[d][i]]);
            ma[br[v[d][i]]]--;
        }
    }

    return f;
}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=2; i<=n; i++)
        {
            cin>>a>>b>>c;
            v[i].pb(a);
            v[a].pb(i);
            me[ {i,a}]= {b,c};
            me[ {a,i}]= {b,c};
        }

        dfs(1);
        for(i=2; i<=n; i++)
        {
            cout<<pr[i]<<" ";
        }
        cout<<endl;
        for(i=0; i<=n+2; i++)
        {
            ar[i]=0;
            br[i]=0;
            vl[i]=0;
            lv[i]=0;
            v[i].cl;
            vi[i]=0;
        }
        me.cl;
        si.cl;
        ma.cl;
    }
}
