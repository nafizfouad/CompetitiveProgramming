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
map<ll,vector<pair<ll,ll> > >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>st;
        for(i=0; i<n; i++)
        {
            if(st[i]=='W')v.pb(i);
        }
        for(i=1; i<v.size(); i++)
        {
            c= v[i]-v[i-1];
            me[c].pb({v[i-1],v[i]});
        }
        for(auto it = me.begin(); it!=me.end(); it++)
        {
            a = (*it).first;
            for(i=0; i<me[a].size(); i++)
            {
                b= me[a][i].first;
                c = me[a][i].second;
                for(j=b+1; j<c; j++)
                {
                    if(m==0)break;
                    st[j]='W',m--;
                }
                if(m==0)break;
            }
            if(m==0)break;
        }
        if(v.size()==0){v.pb(0);if(m){st[0]='W',m--;}}
        b = v[v.size()-1];
        b++;
        while(m && b<n)st[b]='W',m--,b++;

        b = v[0];
        b--;
        while(m && b>=0)st[b]='W',m--,b--;
        //cout<<st<<" h "<<endl;
        d=0;
        for(i=0;i<st.size();i++){
            if(st[i]=='W'){
                    c=0;
                while(st[i]=='W'){
                    i++;
                    c++;
                    if(i==n)break;
                }
                d = d+(c*2)-1;
            }
        }
        cout<<d<<endl;
        me.clear();
        v.clear();
    }
}

