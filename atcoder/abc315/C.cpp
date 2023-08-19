/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 1000000007
#define mod1 1000000009
#define cl clear()
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
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq[300005],nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    // cin>>t;

    while(t--)
    {
        cin>>n;
        c =0;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
            if(ma[a]==0)ma[a]=b;
            else ma[a]=max(ma[a],b);
            pq[a].push(b);
        }
        for(i=1; i<=n; i++)
        {
            if(ma[i]>0)v.pb(ma[i]);
        }
        d = 0;
        if(v.size()>1)
        {
            sort(v.begin(),v.end());
            d = v[v.size()-1]+v[v.size()-2];
        }
        l = 0;
        for(i=1;i<=n;i++){
            if(pq[i].size()>1){
                e = pq[i].top();
                pq[i].pop();
                f = pq[i].top();
                g = max(e,f)+(min(e,f)/2);
                l = max(l,g);
            }
        }
        //cout<<d<<" "<<l<<endl;
        cout<<max(d,l)<<endl;
    }
}
