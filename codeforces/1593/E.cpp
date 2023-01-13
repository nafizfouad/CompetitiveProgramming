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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,b,n,k,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,gg,cc;
vector<ll > s,hh,vv,v;
set< ll> ss[400005],pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        for(i=0; i<n-1; i++)
        {
            cin>>a>>b;
            ss[a].insert(b);
            ss[b].insert(a);
        }
        for(i=1; i<=n; i++)
        {
            if(ss[i].size()==1)ma[i]=1,v.pb(i);
        }
        //cout<<v.size()<<endl;
        for(i=1; i<=m; i++)
        {
            if(v.size()==0)break;
            for(j=0; j<v.size(); j++)
            {
                a = v[j];
                auto it = ss[a].begin();
                b = (*it);
                ma[a]=1;
                ss[b].erase(a);
                if(ss[b].size()==1)s.pb(b);
            }
            v.clear();
            for(j=0; j<s.size(); j++)v.pb(s[j]);
            s.clear();
        }
        c = 0;
        //cout<<ma[1]<<endl;
        for(i=1; i<=n; i++)
        {
            if(ma[i]==0)c++;
        }
        if(n==1)c=0;
        cout<<c<<endl;
        v.clear();
        ma.clear();
        s.clear();
        for(i=0; i<=n; i++)ss[i].clear();
    }

}
