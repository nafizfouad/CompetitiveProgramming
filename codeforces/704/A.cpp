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
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de[300005],ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        l = 0;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        c = 0;
        for(i=0; i<m; i++)
        {
            a = ss[i].first;
            b = ss[i].second;
            if(a==1)
            {
                c++;
                si.insert(c);
                de[b].pb(c);
            }
            else if(a==2)
            {
                if(de[b].size()>0)
                {
                    for(j=0;j<de[b].size();j++)si.erase(de[b][j]);
                    de[b].clear();
                }
            }
            else
            {
                for(auto it = si.begin();it!=si.end();it++){
                    if((*it)>b)break;
                    else v.pb((*it));
                }
                for(j=0;j<v.size();j++)si.erase(v[j]);
                v.clear();
            }
            cout<<si.size()<<endl;
        }
    }
}
