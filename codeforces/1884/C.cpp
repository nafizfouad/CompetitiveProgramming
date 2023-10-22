#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 998244353
#define mod1 1000000009
#define cl clear()
#define con continue
//#define endl '\n'
#define MAXN 200003
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            ma[a]++;
            if(ma[b]==0){}
            ma[b+1]--;
            sa[a]=1;
            sa[b]=1;
            if(a==1)v.pb(b);
            if(b==m)s.pb(a);
        }
        //cout<<ma[1]<<" "<<ma[2]<<" "<<ma[3]<<endl;
        j=0;
        sort(v.begin(),v.end());
        sort(s.begin(),s.end());
        for(auto x:ma)
        {
            j++;
            if(j==1)c=x.second;
            else
            {
                c = c+x.second;
                ma[x.first]=c;
            }
        }
        e = 0;
        for(auto x:ma)
        {
            d = x.first;
            c = x.second;

            if(sa[x.first]==1)
            {
                //cout<<d<<" l "<<c<<endl;
                if(x.first==1)
                {
                    c = x.second;
                    auto it = upper_bound(s.begin(),s.end(),d);
                    //cout<<it-s.begin()<<" "<<(*it)<<" "<<s[0]<<endl;
                    c = c-(it-s.begin());
                    e = max(e,c);
                }
                else if(x.first==m)
                {
                    c = x.second;
                    auto it = lower_bound(v.begin(),v.end(),d);
                    c = c-(v.end()-it);
                    e = max(e,c);
                }
                else
                {
                    c = x.second;
                    auto it = upper_bound(s.begin(),s.end(),d);
                    c = c-(it-s.begin());
                    e = max(e,c);
                    c = x.second;
                    auto ki = lower_bound(v.begin(),v.end(),d);
                    c = c-(v.end()-ki);
                    e = max(e,c);
                }
                //cout<<e<<" l "<<d<<endl;
            }
        }
        cout<<e<<endl;
        ma.cl;
        sa.cl;
        v.cl;
        s.cl;
    }
}

