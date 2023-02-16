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
#define mod 1000000007
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
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

vector<ll > sgt,egt;

ll ini(ll a)
{
    ll b = 1;
    while(b<a)b=b*2;
    for(int i = 0; i<b*2-1; i++)sgt.pb(0),egt.pb(0);
    return b;
}

void modify(ll le,ll ri,ll cur,ll l,ll r,ll d)
{
    if(l>=le && r<=ri)
    {
        sgt[cur] = sgt[cur]+d;
        egt[cur] = egt[cur]+(d*(r-l));
        return;
    }
    if(ri<=l || r<=le)return;
    ll p = (l+r)/2;
    modify(le,ri,2*cur+1,l,p,d);
    modify(le,ri,2*cur+2,p,r,d);
    egt[cur] = (egt[2*cur+1] + egt[2*cur+2]) + (sgt[cur]*(r-l));
}
ll sum(ll le,ll ri,ll cur,ll l,ll r)
{
    if(l>=le && r<=ri)
    {
        return egt[cur];
    }
    if(ri<=l || r<=le)return 0;
    ll p = (l+r)/2;
    ll a,b,e;
    a = sum(le,ri,2*cur+1,l,p);
    b = sum(le,ri,2*cur+2,p,r);
    e = (a+b) + (sgt[cur]*(min(ri,r)-max(le,l)));
    return e;

}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        f = 0;
        e = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
        }
        h = ini(n);
        c = 0;
        for(i=0; i<n; i++)
        {
            c = c+s[i];
            vv.pb(c);
        }
        for(i=0; i<n; i++)
        {
            d = v[i]+e;
            auto it = lower_bound(vv.begin()+i,vv.end(),d);

            f = it-vv.begin();
            if(it!=vv.end()) if((*it)==d)f++;
            if(f<=n-1)
            {
                if((*it)!=d){
                    if(it==vv.begin()+i)ma[f]+=v[i];
                    else {
                        --it;
                        ma[f]+=d-(*it);
                    }
                }
            }
            //cout<<i<<" "<<f<<" "<<d<<endl;
            modify(i,f,0,0,h,1LL);
            e = e+s[i];
        }
        for(i=0; i<n; i++)
        {
            a = sum(i,i+1,0,0,h);
            d = (a*s[i])+ma[i];
            cout<<d<<" ";
        }
        cout<<endl;
        ma.clear();
        vv.clear();
        v.clear();
        s.clear();
        sgt.clear();
        egt.clear();
    }
}
