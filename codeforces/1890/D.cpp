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
ll i,j,a,k,b,n,t=1,m,p,q,c,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,v,vv;
vector<pair<ll,ll> > ss,pp,rr;
vector<vector<ll> > ii;
map<char,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
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
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        c=v[0];
        for(i=1;i<n;i++){
            d = (i+1)*m;
            e = d-c;
            f = v[i]-e;
            pq.push({f,v[i]});
        }
        e=0;
        f=0;
        while(pq.size()){
            a = pq.top().first;
            b = pq.top().second;
            a = a+e;
            if(a>=0){
                    pq.pop();
                e = e+b;
            }
            else {f=1;break;}
        }
        if(f==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        v.cl;
        while(pq.size())pq.pop();
    }
}
