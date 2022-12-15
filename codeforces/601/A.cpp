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
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh[405],v[405],vv[405],rr;
vector<vector<ll> > pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

void find_ss(ll n, ll u, vector<ll>& s, ll f)
{
    if (u == -1)
    {
        if(f==0)ss.pb(s);
        else pp.pb(s);
        return;
    }

    for (ll par : vv[u])
    {

        s.pb(u);

        find_ss(n, par, s, f);

        s.pop_back();
    }
}

void bfs(ll n, ll start)
{

    vector<ll> dist(n, 1e18);

    queue<ll> q;

    q.push(start);
    vv[start] = { -1 };
    dist[start] = 0;

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for (ll l : v[u])
        {
            if (dist[l] > dist[u] + 1)
            {
                dist[l] = dist[u] + 1;
                q.push(l);
                vv[l].clear();
                vv[l].pb(u);
            }
            else if (dist[l] == dist[u] + 1)
            {
                vv[l].pb(u);
            }
        }
    }
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
            cin>>a>>b;
            v[a-1].pb(b-1);
            v[b-1].pb(a-1);
            hh[a-1].pb(b-1);
            hh[b-1].pb(a-1);
            me[ {a-1,b-1}]=1;
            me[ {b-1,a-1}]=1;
        }

        bfs(n, 0);

        find_ss(n, n-1, s, 0);

        for(i=0; i<ss.size(); i++)
        {
            reverse(ss[i].begin(),ss[i].end());
        }

        for(i=0; i<n+2; i++)v[i].clear(),vv[i].clear();
        s.clear();

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(me[ {i,j}]==0)
                {
                    v[i].pb(j);
                    v[j].pb(i);
                    se[ {i,j}]=1;
                    se[ {j,i}]=1;
                }
            }
        }

        bfs(n, 0);

        find_ss(n, n-1, s, 1);

        for(i=0; i<pp.size(); i++)
        {
            reverse(pp[i].begin(),pp[i].end());
        }
        d = 0;
        for(i=0; i<ss.size(); i++)
        {
            for(j=0; j<pp.size(); j++)
            {
                f=0;
                for(k=0; k<ss[i].size() && pp[j].size(); k++)
                {
                    if(ss[i][k]==pp[j][k] && ss[i][k]!=0 && ss[i][k]!=n-1)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    d=1;
                    break;
                }
            }
            if(d==1)break;
        }
//        for(i=0;i<pp.size();i++){
//            for(j=0;j<pp[i].size();j++){
//                cout<<pp[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//        for(i=0;i<ss.size();i++){
//            for(j=0;j<ss[i].size();j++){
//                cout<<ss[i][j]<<" ";
//            }
//            cout<<endl;
//        }
        if(ss.size()==0 || pp.size()==0)cout<<-1<<endl;
        else if(d==1)
        {
            cout<<max(ss[0].size()-1,pp[0].size()-1)<<endl;
        }
        else
        {
           d = 1e18;

           f = 0;

            for(i=0; i<ss.size(); i++)
            {
                for(j=0; j+1<ss[i].size(); j++)
                {
                   for(k=0;k<hh[ss[i][j]].size();k++){
                    if(me[{hh[ss[i][j]][k],ss[i][j+1]}]==1){
                        f=1;
                        break;
                    }
                   }
                   if(f==1)break;
                }
                if(f==1)break;
            }
            l = ss[0].size()-1;
            r = pp[0].size()-1;
            if(f==1){
                d = min(d,max(l+1,r));
            }
            else d = min(d,max(l+2,r));

            f = 0;

            for(i=0; i<pp.size(); i++)
            {
                for(j=0; j+1<pp[i].size(); j++)
                {
                   for(k=0;k<v[pp[i][j]].size();k++){
                    if(se[{v[pp[i][j]][k],pp[i][j+1]}]==1){
                        f=1;
                        break;
                    }
                   }
                   if(f==1)break;
                }
                if(f==1)break;
            }
            if(f==1){
                d = min(d,max(l,r+1));
            }
            else d = min(d,max(l,r+2));
            cout<<d<<endl;
        }
    }
}
