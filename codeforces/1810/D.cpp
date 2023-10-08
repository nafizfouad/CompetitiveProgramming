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
vector<pair<pair<ll,ll>,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>p;
        for(i=0; i<p; i++)
        {
            cin>>a;
            if(a==1)
            {
                cin>>a>>b>>n;
                ss.pb({{a,b},n});
            }
            else
            {
                cin>>a>>b;
                ss.pb({{a,b},0});
            }
        }
        l = -1e18;
        r = 1e18;
        for(i=0; i<p; i++)
        {
            a = ss[i].first.first;
            b = ss[i].first.second;
            c = ss[i].second;
            if(c==0)
            {
                        if(r<=a)cout<<1<<" ";
                        else{
                        u = ((l-b-1)/(a-b))+1;
                        e = ((r-b-1)/(a-b))+1;
                        if(u==e)cout<<max(1LL,u)<<" ";
                        else cout<<-1<<" ";}

            }
            else
            {
                if(l==-1e18)
                {
                    if(c==1)
                    {
                        l = 1;
                        r = a;
                        cout<<1<<" ";
                    }
                    else
                    {
                        r = a*c-(b*(c-1));
                        l = max(r-a+1,r-a+b+1);
                        cout<<1<<" ";
                    }
                }
                else
                {
                    if(c==1)
                    {
                        u=a;
                        o=1;
                    }
                    else
                    {
                        u = a*c-(b*(c-1));
                        o = max(u-a+1,u-a+b+1);
                    }
                    if(u<l || o>r)cout<<0<<" ";
                    else
                    {
                        l = max(l,o);
                        r = min(r,u);
                        cout<<1<<" ";
                    }
                }
            }
        }
        cout<<endl;
        ss.cl;
    }
}
