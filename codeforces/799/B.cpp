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
vector<pair<ll,pair<ll,ll> > > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de[5],ne;
set<ll > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

ll ar[200006];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }

        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            ss.pb({v[i],{s[i],a}});
        }
        sort(ss.begin(),ss.end());
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a;
            de[a].pb(i);
        }
        for(i=0; i<n; i++)
        {
            a = ss[i].first;
            b = ss[i].second.first;
            c = ss[i].second.second;

            if(de[b].size()>0 && de[c].size()>0)
            {

                d = de[b].front();
                e = de[c].front();
                if(d<e)
                {
                    ar[d] = a;
                    de[b].pop_front();
                }
                else
                {
                    ar[e] = a;
                    de[c].pop_front();
                }
            }
            else if(de[b].size()>0)
            {
                d = de[b].front();
                ar[d] = a;
                de[b].pop_front();
            }
            else if(de[c].size()>0)
            {
                d = de[c].front();
                ar[d] = a;
                de[c].pop_front();
            }
        }
        for(i=0; i<m; i++)
        {
            if(ar[i]==0)cout<<-1<<" ";
            else cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}
