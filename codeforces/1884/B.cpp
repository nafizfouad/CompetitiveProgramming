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
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>st;
        for(i=0,j=n-1;j>=0 &&  i<n;j--, i++)
        {
            if(st[j]=='1')
            {
                si.insert(i);
            }
            else li.insert(i);
        }
        if(si.size()==0){
            for(i=0;i<n;i++)cout<<0<<" ";
            cout<<endl;
        }
        else{
        c=0;
        for(i=0; i<n; i++)
        {
            auto it = si.lower_bound(i);
            if(it==si.end())cout<<-1<<" ";
            else if((*it)==i && it==si.begin())
            {
                if(li.size())
                {
                    auto ki = li.lower_bound(i);
                    if(ki==li.end())cout<<-1<<" ";
                    else{
                    c = c+((*ki)-i);
                    si.insert((*ki));
                    si.erase(i);
                    li.erase(ki);
                    cout<<c<<" ";}
                }
                else cout<<-1<<" ";
            }
            else if((*it)>i && it==si.begin())cout<<0<<" ";
            else cout<<-1<<" ";
        }
        cout<<endl;}
        li.cl;
        si.cl;
    }
}

