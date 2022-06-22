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
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v[105],vv,s;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,vector<ll> >se,me;
priority_queue<ll,vector<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
ll ar[106];
void bfs(ll a)
{

    ll b,c,d,i,j,k;

    de.clear();
    de.pb(a);
    ar[a] = 1;
    while(de.size())
    {

        d = de.front();
        for(i=0; i<v[d].size(); i++)
        {
            if(ar[v[d][i]]==0)
            {
                ar[v[d][i]] = 1;
                de.pb(v[d][i]);
            }
        }
        de.pop_front();
    }
}

int main()
{
    fast;
    //  cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a>0)f=1;
            for(j=0; j<a; j++)
            {
                cin>>b;
                me[b].pb(i+1);
            }
        }
        for(auto it = me.begin(); it!=me.end(); it++)
        {
            a = (*it).first;
            for(i=0; i<me[a].size(); i++)
            {
                for(j=i+1; j<me[a].size(); j++)
                {
                    v[me[a][i]].pb(me[a][j]);
                    v[me[a][j]].pb(me[a][i]);
                }
            }
        }
        c = -1;
        if(f==0)c=0;
        for(i=1;i<=n;i++){
            if(ar[i]==0){
                    c++;
                bfs(i);
            }
        }
        cout<<c<<endl;
    }

}
