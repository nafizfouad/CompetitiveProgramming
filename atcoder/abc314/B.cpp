/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define cl clear()
#define mod 1000000007
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
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            for(j=0;j<a;j++){
                cin>>b;
                me[b].pb(i);
            }
            ma[i]=a;
        }
        cin>>m;
        for(auto it=me[m].begin();it!=me[m].end();it++){
            ss.pb({ma[(*it)],(*it)});
        }
        sort(ss.begin(),ss.end());
        for(i=0;i<ss.size();i++){
                //cout<<ss[i].first<<" "<<ss[i].second<<endl;
            if(i>0){
                if(ss[i].first!=ss[i-1].first)break;
            }
            v.pb(ss[i].second);
        }
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)cout<<v[i]+1<<" ";
        cout<<endl;
    }

}
