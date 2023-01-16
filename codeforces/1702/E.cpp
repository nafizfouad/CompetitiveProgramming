#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 32000
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,b,n,k,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,gg,cc;
vector<ll > s,hh,vv,v[200005];
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
queue<pair<pair<ll,ll>,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<pair<ll,ll> > li,si;
set<ll> pi;

//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
            v[a].pb(i);
            v[b].pb(i);
            pi.insert(i);
        }
        aq.push({{a,b},n-1});
        ma[n-1]=1;
        li.insert({a,b});
        f = 0;
        while(aq.size()>0 || pq.size()>0)
        {
            while(aq.size())
            {
                a = aq.front().first.first;

                b = aq.front().first.second;

                c = aq.front().second;

                aq.pop();
                if(a==b)f=1;
                if(v[a].size()>2 || v[b].size()>2)f=1;
                if(v[a].size()>1)
                {
                    if(v[a][0]==c)
                    {
                        if(ma[v[a][1]]==0)
                        {
                            p = v[a][1];
                            pq.push({{ss[p].first,ss[p].second},p});
                            si.insert({ss[p].first,ss[p].second});
                            ma[v[a][1]]=1;
                        }
                    }
                    else if(v[a][1]==c)
                    {
                        if(ma[v[a][0]]==0)
                        {
                            p = v[a][0];
                            pq.push({{ss[p].first,ss[p].second},p});
                            si.insert({ss[p].first,ss[p].second});
                            ma[v[a][0]]=1;
                        }
                    }

                }
                if(v[b].size()>1)
                {
                    if(v[b][0]==c)
                    {
                        if(ma[v[b][1]]==0)
                        {
                            p = v[b][1];
                            pq.push({{ss[p].first,ss[p].second},p});
                            si.insert({ss[p].first,ss[p].second});
                            ma[v[b][1]]=1;
                        }
                    }
                    else if(v[b][1]==c)
                    {
                        if(ma[v[b][0]]==0)
                        {
                            p = v[b][0];
                            pq.push({{ss[p].first,ss[p].second},p});
                            si.insert({ss[p].first,ss[p].second});
                            ma[v[b][0]]=1;
                        }
                    }
                }
                pi.erase(c);
            }
            while(pq.size())
            {
                a = pq.front().first.first;

                b = pq.front().first.second;

                c = pq.front().second;

                pq.pop();
                if(v[a].size()>2 || v[b].size()>2)f=1;
                if(a==b)f=1;
                if(v[a].size()>1){
                if(v[a][0]==c)
                {
                    if(ma[v[a][1]]==0)
                    {
                        p = v[a][1];
                        aq.push({{ss[p].first,ss[p].second},p});
                        li.insert({ss[p].first,ss[p].second});
                        ma[v[a][1]]=1;
                    }
                }
                else if(v[a][1]==c)
                {
                    if(ma[v[a][0]]==0)
                    {
                        p = v[a][0];
                        aq.push({{ss[p].first,ss[p].second},p});
                        li.insert({ss[p].first,ss[p].second});
                        ma[v[a][0]]=1;
                    }
                }}
if(v[b].size()>1){
                if(v[b][0]==c)
                {
                    if(ma[v[b][1]]==0)
                    {
                        p = v[b][1];
                        aq.push({{ss[p].first,ss[p].second},p});
                        li.insert({ss[p].first,ss[p].second});
                        ma[v[b][1]]=1;
                    }
                }
                else if(v[b][1]==c)
                {
                    if(ma[v[b][0]]==0)
                    {
                        p = v[b][0];
                        aq.push({{ss[p].first,ss[p].second},p});
                        li.insert({ss[p].first,ss[p].second});
                        ma[v[b][0]]=1;
                    }
                }}
                pi.erase(c);
            }
            if(aq.size()==0 && pq.size()==0 && pi.size()>0)
            {
                auto it = pi.begin();
                a = (*it);
                aq.push({{ss[a].first,ss[a].second},a});
                li.insert({ss[a].first,ss[a].second});
                ma[a]=1;
            }
        }
        if(pi.size()>0)f=1;
        for(auto it = li.begin(); it!=li.end(); it++)
        {
            sa[(*it).first]++;
            sa[(*it).second]++;
            if(sa[(*it).first]>1)f=1;
            if(sa[(*it).second]>1)f=1;
        }
        for(auto it = si.begin(); it!=si.end(); it++)
        {
            pa[(*it).first]++;
            pa[(*it).second]++;
            if(pa[(*it).first]>1)f=1;
            if(pa[(*it).second]>1)f=1;
        }
        if(f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        while(aq.size())aq.pop();
        while(pq.size())pq.pop();
        for(i=0; i<=n; i++)v[i].clear();
        ss.clear();
        si.clear();
        li.clear();
        pi.clear();
        ma.clear();
        sa.clear();
        pa.clear();
    }

}
