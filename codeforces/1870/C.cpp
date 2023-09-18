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
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

bool cmp(pair<ll,ll> &a, pair<ll,ll> &b)
{

    if(a.first!=b.first)return a.first<b.first;
    else return a.second<b.second;


}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            sa[a]++;
            //v.pb(a);
            si.insert(i);
            ss.pb({a,i});
        }
        sort(ss.begin(),ss.end(),cmp);
        for(i=0; i<n; i++)
        {
            a = ss[i].first;
            b = ss[i].second;
            //cout<<i<<endl;
            if(ma[a]==0)
            {

                    auto it = si.begin();
                    c = (*it);
                    d = b;
                    e = b;
                    f = c;

                    l = min(c,e);
                    r = min(d,f);

                    auto ki = si.rbegin();
                    c = (*ki);
                    d = b;
                    e = b;
                    f = c;

                    u = max(c,e);
                    o = max(d,f);

                    ma[a] = u-l+1+o-r+1;
                    //cout<<l<<" "<<r<<" "<<u<<" "<<o<<" "<<a<<endl;
            }
            if(si.size())si.erase(b);
        }
        //cout<<'l'<<endl;
        for(i=1;i<=k;i++){
            cout<<ma[i]<<" ";
        }
        cout<<endl;
        ma.cl;
        si.cl;
        ss.cl;
        sa.cl;
    }
}
