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
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        de.cl;
        v.cl;
        while(pq.size())pq.pop();
        cin>>n>>p;
        c=0;
        d=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<n; i++)
        {
            cin>>a;

            pq.push({a,v[i]});
        }
        a = pq.top().first;
        if(a>=p)
        {
            cout<<n*p<<endl;
            con;
        }
        a = pq.top().first;
        b = pq.top().second;
        pq.pop();
        de.pb({a,b});
        c=p;
        while(1)
        {
            a = de[0].first;
            b = de[0].second;
            de.pop_front();
            if(a>=p){
                c = c+(pq.size()*p);
                break;
            }
            for(i=1; i<=b; i++)
            {
                if(pq.size()==0)break;
                e= pq.top().first;
        f = pq.top().second;
                pq.pop();
                de.pb({e,f});
                c = c+a;
            }
            if(pq.size()==0)break;
        }
        cout<<c<<endl;
    }
}

