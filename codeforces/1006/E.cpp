
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
vector<ll> vv[200005];
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ma;
ll ar[200005],t = 0,d[200005],f[200006];
void dfs(ll a)
{

    ll i,j,k,b,c;
    ar[a] = 1;
    t++;
    d[a] = t;
    for(i=0; i<vv[a].size(); i++)
    {
        if(ar[vv[a][i]]==0)
        {
            ar[vv[a][i]]=1;
            dfs(vv[a][i]);
        }
    }
    t++;
    f[a]=t;
}
int main()
{
ll n,m,i,a,b,c,e,g,h,j,k;
    cin>>n>>m;
    for(i=0;i<n-1;i++){
        cin>>a;
        vv[a].pb(i+2);
        vv[i+2].pb(a);
    }
    for(i=0;i<m;i++){
        cin>>a>>b;
        pp.pb({a,b});
    }
   dfs(1);
    for(i=1;i<=n;i++){
        ss.pb({d[i],f[i]});
        ma[d[i]]= i;
    }
    sort(ss.begin(),ss.end());
    for(i=0;i<m;i++){
        a = pp[i].first;
        b = pp[i].second;
        e = d[a];
        c = f[a];
        auto it = lower_bound(ss.begin(),ss.end(),make_pair(c,0LL));
        --it;
        g = distance(ss.begin(),it);
        auto ki = lower_bound(ss.begin(),ss.end(),make_pair(e,c));
        h = distance(ss.begin(),ki);
        j = g-h+1;
        if(b>j)cout<<-1<<endl;
        else {
            j = h+b-1;
            h = ss[j].first;
            cout<<ma[h]<<endl;
        }
    }

}
