#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh,vv,v;
vector<pair<ll,ll> > pp,ss;
map<ll,ll > ta,pa,sa,ma;
map<ll,priority_queue<ll,vector<ll>,greater<ll> > >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
           cin>>a;
           me[a].push(i);
           v.pb(a);
        }
        for(auto it = me.begin();it!=me.end();it++){
              a=(*it).first;
              d = a*2;
              //cout<<a<<endl;
              while(me[a].size()>1){
                b = me[a].top();
                me[a].pop();
                c = me[a].top();
                me[a].pop();
                me[d].push(c);
              }
        }
        for(auto it = me.begin();it!=me.end();it++){
              a=(*it).first;
               if(me[a].size()>0){
                b = me[a].top();
                ss.pb({b,a});
               }
        }
        sort(ss.begin(),ss.end());
        cout<<ss.size()<<endl;
        for(i=0;i<ss.size();i++){
            cout<<ss[i].second<<" ";
        }
        cout<<endl;

    }

}
