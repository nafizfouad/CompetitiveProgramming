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
vector<ll> v[100006],s,vv;
vector< pair<ll,ll> > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map< pair<ll,ll>, ll >se,me;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll vi[100005];

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
                q.push(v[d][i]);
                if(d!=a){
                    if(s[d]!=s[v[d][i]]){f=1;break;}
                }
            }
        }
        if(f==1)break;
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

        for(i=0; i<n-1; i++)
        {
            cin>>a>>b;
            a--;
            b--;
            v[a].pb(b);
            v[b].pb(a);
            ss.pb({a,b});
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
        }

        for(i=0; i<n-1; i++)
        {
           if(s[ss[i].first]!=s[ss[i].second]){
            d = ss[i].first;
            e = ss[i].second;
           }
        }

       l = bfs(d);

       for(i=0;i<=n+2;i++)vi[i]=0;

       r = bfs(e);

       if(l==0){
        cout<<"YES"<<endl;
        cout<<d+1<<endl;
       }
       else if(r==0){
        cout<<"YES"<<endl;
        cout<<e+1<<endl;
       }
       else cout<<"NO"<<endl;
    }

}

