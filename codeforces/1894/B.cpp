/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 1000000007
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
ll i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,v,vv;
vector<string > ss,pp,rr;
vector<vector<ll> > ii;
map<ll,vector<ll> > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
            ma[a].pb(i);
        }
        d=0;
        for(auto x:ma){
            if(ma[x.first].size()>=2)d++;
        }
        j=0;
        if(d>=2){
            for(auto x:ma){
                    
                    if(ma[x.first].size()>1){
                    j++;
                for(i=0;i<ma[x.first].size();i++){
                        p = ma[x.first][i];
                    if(i%2==0)v[p]=1;
                    else if(j%2==1)v[p]=2;
                    else v[p]=3;
                }}
                else v[ma[x.first][0]]=1;
            }
            for(i=0;i<n;i++)cout<<v[i]<<" ";
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        ma.cl;
        v.cl;
    }
}
