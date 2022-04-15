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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<vector<ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll od[200005],ev[200005],mio[200005],mev[200005];

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        d=0;
        e=1e18;
        f=1e18;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(i%2==0)c=c+a,e=min(e,a);
            if(i%2==1)d=d+a,f=min(f,a);

            od[i]=c;
            ev[i]=d;
            mio[i]=e;
            mev[i]=f;
        }
        c = 1;
        d =0;
        f = 1e18;
        for(i=1;i<n;i++){
            if(i%2==0)c++;
            else d++;
            e = od[i]+(mio[i]*(n-c))+ev[i]+(mev[i]*(n-d));
            f = min(e,f);
        }
        cout<<f<<endl;
        for(i=0;i+2<n;i++)mio[i]=0,mev[i]=0,od[i]=0,ev[i]=0;
    }
}

