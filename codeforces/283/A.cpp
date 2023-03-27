#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

vector<ll > sgt,egt;

ll ini(ll a)
{
    ll b = 1;
    while(b<a)b=b*2;
    for(int i = 0; i<b*2-1; i++)sgt.pb(0),egt.pb(0);
    return b;
}
ll sett(ll i,ll m,ll l,ll r)
{
    if(r-l==1)
    {
        return sgt[m];
    }
    ll a;
    ll p = (l+r)/2;
    if(i<p)a = sett(i,2*m+1,l,p);
    else a = sett(i,2*m+2,p,r);
    if(sgt[m]==1e18)return a;
    else return sgt[m];

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
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    vector<ll> ss,pp;
    map<char,ll > mm;
    map<ll, ll> sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    list<ll> di,li;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    e = ini(n+3);
    l = 0;
    for(j=0; j<n; j++)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b>>c;
            modify(0,b,0,0,e,c);
        }
        else if(a==2)
        {
            cin>>b;
            l++;
            modify(l,l+1,0,0,e,b);
        }
        else{
            a = sum(l,l+1,0,0,e);
            modify(l,l+1,0,0,e,-a);
            l--;
        }
        aa = (egt[0]*1.0)/((l+1)*1.0);
        cout<<fixed<<setprecision(7)<<aa<<endl;
    }
    return 0;
}
