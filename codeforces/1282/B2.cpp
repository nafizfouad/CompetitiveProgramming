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
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv;
vector< pair<ll,ll> > ss[200006],pp,hh;
map<ll,ll > ta,pa,sa,ma;
map< pair<ll,ll>, ll >se,me;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            s.pb(a);
        }
        sort(v.begin(),v.end(),greater<ll>());
        sort(s.begin(),s.end());
        for(i=1; i<n; i++)s[i]+=s[i-1];
        for(i=0; i<k; i++)
        {
            c = 0;
            for(j=i; j<n; j=j+k)
            {
                c = c+v[j];
                ss[i].pb({c,j});
            }
        }
        f = -1e18;
        for(i=0; i<k; i++)
        {
            c = 0;
            for(j=0; j<ss[i].size(); j++)
            {
                //cout<<ss[i][j].first<<" "<<c+m<<" "<<i<<" "<<j<<endl;
                pair<ll,ll> pai;
                pai = {c+m,-1};
                auto it = lower_bound(ss[i].begin()+j,ss[i].end(),pai);
                if(it==ss[i].end())--it;
                if((*it).first>c+m)
                {
                    if(it!=ss[i].begin()+j)
                    {
                        --it;
                        goto xx;
                    }
                    else
                    {
                        c = c+v[ss[i][j].second];
                        continue;
                    }
                }
xx:
                b = (*it).second;
                e = ss[i][j].second;
                d = abs(b-e)+1;
                l = n-b;
                if(j==0)p=m-(*it).first;
                else p = m-((*it).first-ss[i][j-1].first);
                //cout<<p<<" "<<i<<" "<<j<<" "<<l<<" "<<b<<" "<<e<<endl;
                if(l>=k)
                {

                    h = n-(b+k-1)-1;
                    r = 0;
                    if(h>0 && p>0)
                    {
                        auto it = lower_bound(s.begin(),s.begin()+h,p);
                        if(it>=s.begin()+h)--it;

                        if((*it)>p && it!=s.begin())
                        {
                            --it;
                            r = (it-s.begin())+1;
                        }
                        else if((*it)<=p)r = it-s.begin()+1;
                    }


                    f = max(f,d+k-1+r);
                }
                else
                {
                    h = n-b-1;
                    r = 0;
                    if(h>0 && p>0)
                    {
                        auto it = lower_bound(s.begin(),s.begin()+h,p);
                       // cout<<(*it)<<" "<<i<<" "<<j<<endl;
                       if(it>=s.begin()+h)--it;
                      // cout<<(*it)<<" "<<i<<" "<<j<<endl;
                        if((*it)>p && it!=s.begin())
                        {
                            --it;

                            r = (it-s.begin())+1;
                        }
                        else if((*it)<=p)r = (it-s.begin())+1;
                        //cout<<(*it)<<" "<<r<<endl;
                    }

                    f = max(f,d+r);
                }

                //cout<<f<<" h "<<i<<" "<<j<<" "<<c<<" "<<b<<" "<<e<<endl;
                c = c+v[ss[i][j].second];

            }
        }
        if(f==-1e18)f=0;
        cout<<f<<endl;
        v.clear();
        s.clear();
        for(i=0; i<=n; i++)ss[i].clear();
    }
}
