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
vector<ll > s,hh,vv,v[200];
vector<pair<ll,ll> > pp,ss;
map<char,ll > ta,pa,sa,ma;
map<pair<char,char>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll vi[200];

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
                s.pb(v[d][i]);
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
        cin>>st;
        cin>>et;
        for(i=0; i<n; i++)
        {
            if(st[i]!=et[i])
            {
                char bh = min(st[i],et[i]);
                char dh = max(st[i],et[i]);
                me[{bh,dh}]++;
                if(me[{bh,dh}]==1){
                    v[bh].pb(dh);
                    v[dh].pb(bh);
                }
            }
        }
        c = 0;
        for(i=97;i<=122;i++){
            if(vi[i]==0){
                    s.clear();
                    s.pb(i);
                bfs(i);
                c =c+s.size()-1;
                for(j=1;j<s.size();j++){
                    ss.pb({s[j],s[0]});
                }
            }
        }
        cout<<c<<endl;
        for(i=0;i<c;i++){
            cout<<char(ss[i].first)<<" "<<char(ss[i].second)<<endl;
        }
    }

}
