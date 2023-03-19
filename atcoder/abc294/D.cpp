#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int
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
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
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
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a;
            if(a==2){
                cin>>b;
                ss.pb({b,0});
            }
            else ss.pb({a,1});
        }
        for(i=1;i<=n;i++){
            si.insert(i);
        }
        for(i=0;i<m;i++){
            if(ss[i].second==1){
                if(ss[i].first==1){
                    auto it = si.begin();
                    li.insert((*it));
                    si.erase(it);
                }
                else{
                    auto it = li.begin();
                    v.pb((*it));
                }
            }
            else{
                li.erase(ss[i].first);
            }
        }
        for(i=0;i<v.size();i++)cout<<v[i]<<endl;
        
    }

}
