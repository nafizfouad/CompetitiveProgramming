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
vector<ll > s[100006],v,vv,rr;
vector<char> pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
multiset<pair<ll,ll> >si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            sa[a]++;
        }
        for(auto it = sa.begin();it!=sa.end();it++){
            v.pb((*it).first);
        }
        sort(v.begin(),v.end());
        for(i=0; i<v.size(); i++)
        {
            for(j=1; j*j<=v[i] && j<=m; j++)
            {
                if(v[i]%j==0)
                {
                    s[v[i]].pb(j);
                    if((v[i]/j)!=j && (v[i]/j)<=m)s[v[i]].pb(v[i]/j);
                }
            }
        }
        k = 0;
        d = 1e18;
        for(i=0; i<v.size(); i++)
        {
            for(j=0; j<s[v[i]].size(); j++)
            {
                ma[s[v[i]][j]]++;
            }
            if(ma.size()==m)
            {
                while(ma.size()==m && k<=i)
                {
                    d = min(d,v[i]-v[k]);
                    for(j=0; j<s[v[k]].size(); j++)
                    {
                        ma[s[v[k]][j]]--;
                        if(ma[s[v[k]][j]]==0)ma.erase(s[v[k]][j]);
                    }
                    k++;
                }
            }
        }
        if(d==1e18)d=-1;
        cout<<d<<endl;
        ma.clear();
        for(i=0;i<v.size();i++){
            s[v[i]].clear();
        }
        v.clear();
        sa.clear();
    }
}
