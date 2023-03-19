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
vector<ll > s,hh,vv,v;
vector<pair<ll,ll> > pp,ss;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>l>>r;
        for(i=0; i<l; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        for(i=0; i<r; i++)
        {
            cin>>a>>b;
            pp.pb({a,b});
        }
        a = 1;
        b = ss[0].second;
        o = ss[0].first;
        c = 1;
        d = pp[0].second;
        u = pp[0].first;
        j = 1;
        k = 1;
        f = 0;
        while(1)
        {
            x = max(a,c);
            y = min(b,d);
            if(y-x>=0 && o==u){
                f = f+y-x+1;
            }
            if(b==n && d==n)break;
            if(b<=d){
                a = b+1;
              b = a+ss[j].second-1;
        o = ss[j].first;
        j++;
            }
            else {
                c = d+1;
              d = c+pp[k].second-1;
        u = pp[k].first;
        k++;
            }
        }
        cout<<f<<endl;
    }

}
