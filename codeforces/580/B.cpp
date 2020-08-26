#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<pair<ll,ll> > v,s;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    vector<ll> ve;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        v.pb({a,b});
        ve.pb(a);
    }
    sort(v.begin(),v.end());
    sort(ve.begin(),ve.end());
    for(i=1; i<n; i++)
    {
        v[i].second = v[i].second+v[i-1].second;
    }
    e = 0;
    for(i=0; i<n; i++)
    {
        a = v[i].first+m-1;
        f = 0;
        auto it = upper_bound(ve.begin(),ve.end(),a);
        if(it!=ve.end())
        {
            d = distance(ve.begin(),it);
            f = v[d-1].second;
            if(i!=0)f=f-v[i-1].second;
        }
        else
        {
            f = v[n-1].second;
            if(i!=0)f = f-v[i-1].second;
        }
        e = max(e,f);
    }
    cout<<e<<endl;
}
