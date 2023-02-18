#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<ll> ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            s.pb(a);
        }
        for(i=1;i<n;i++)v[i]+=v[i-1];
        e = -1e18;
        for(i=n-1;i>=0;i--){
                d=0;
                ss.clear();
            for(j=0;j<vv.size();j++){
                d = d+(vv[j]/2);
                vv[j]=vv[j]/2;
                if(vv[j]>0)ss.pb(vv[j]);
            }
            vv.clear();
            for(j=0;j<ss.size();j++)vv.pb(ss[j]);
            vv.pb(s[i]);
            p = v[i]-(m*(i+1))+d;
            //cout<<e<<" "<<p<<" "<<d<<endl;
            e = max(e,p);
        }
         d=0;
            for(j=0;j<vv.size();j++){
                d = d+(vv[j]/2);
            }
        cout<<max(e,d)<<endl;
        v.clear();
        s.clear();
        vv.clear();
        ss.clear();
    }

}
