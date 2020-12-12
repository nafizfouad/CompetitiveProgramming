#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

map<ll,ll> maa,ma,sa;
vector<ll> v;
void recu(ll min,ll max,ll fi)
{
    ll a,b,c,d;
    if(min==max){
        b = sa[min];
        maa[b] = 1;
        return;
    }
    auto it = lower_bound(v.begin(),v.end(),min-1);
    auto ki = lower_bound(v.begin(),v.end(),max);
    c = distance(v.begin(),it);
    if(v[c]!=min-1)
    {
        if(c!=0)c = ma[v[c-1]];
        else c = 0;
    }
    else c = ma[v[c]];
    d= distance(v.begin(),ki);
    if(v[d]!=max)
    {
        if(d!=0)d = ma[v[d-1]];
        else d = ma[fi];
    }
    else d = ma[v[d]];
    b = d-c;
    maa[b]=1;
    a = (min+max)/2;
    ll e = a;
    auto pa = lower_bound(v.begin(),v.end(),e);
    ll f = distance(v.begin(),pa);
    if(v[f]>a){if(f!=0)a = v[f-1];else a = min;}
    else a = v[f];
    recu(min,a,fi);
    ll g = a+1;
    auto la = lower_bound(v.begin(),v.end(),g);
    ll k = distance(v.begin(),la);
    recu(v[k],max,fi);
}

int main()
{
    ll i,j,a,k,b,c,n,t,e,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,pp;
    vector<ll > s,vv,tt;
    vector<ll> ss;
    map<pair<ld,ld>,ll > me;
    map<ll,ll > ta,pa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        l = -1e18;
        c = 1e18;
        for(i=0; i<n; i++)
        {
            cin>>a;
            ma[a] = ma[a]+a;
            sa[a] = sa[a]+a;
            l= max(l,a);
            c = min(c,a);
            v.pb(a);
        }
        sort(v.begin(),v.end());
        k = 0;
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            a = (*it).first;
            if(k==1)
            {
                ma[a] = ma[a]+b;
            }
            b = ma[a];
            k = 1;
        }
        auto it =ma.begin();
        a = (*it).first;
        recu(c,l,a);
        for(i=1; i<=m; i++)
        {
            cin>>a;
            if(maa[a]==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        v.clear();
        ma.clear();
        sa.clear();
        maa.clear();
    }
}
