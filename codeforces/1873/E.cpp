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
map<string,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
set<pair<ll,ll> > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

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
            ma[a]++;
            if(ma[a]==1)v.pb(a);
        }
        sort(v.begin(),v.end());
        for(i=0; i+1<v.size(); i++)
        {
            a = ma[v[i]];
            c = (v[i+1]-v[i])*ma[v[i]];
            //cout<<k<<" "<<c<<endl;
            if(k>=c)
            {
                k = k-c;
                ma[v[i+1]]+=ma[v[i]];
                ma[v[i]]=0;
            }
            else break;
        }
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            a = (*it).first;
            b = (*it).second;
            if(b!=0)
            {
                //cout<<k<<" "<<b<<endl;
                c = k/b;
                a = a+c;
                cout<<a<<endl;
                break;
            }
        }
        v.cl;
        ma.cl;
    }
}
