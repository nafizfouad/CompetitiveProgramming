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
vector< pair<ll,ll> > pp,ss;
map<char,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq,nq,mq,xq;
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
        cin>>l>>r>>x>>y;
        for(i=1;i*i<=x;i++){
            if(x%i==0){
                a = i;
                b = (x/i)*y;
                c = min(a,b);
                d = max(a,b);
                me[{c,d}]=1;

                a = (x/i);
                b = i*y;
                c = min(a,b);
                d = max(a,b);
                me[{c,d}]=1;
            }
        }
        for(i=1;i*i<=y;i++){
            if(y%i==0){
                a = i;
                b = (y/i)*x;
                c = min(a,b);
                d = max(a,b);
                me[{c,d}]=1;

                a = (y/i);
                b = x*i;
                c = min(a,b);
                d = max(a,b);
                me[{c,d}]=1;
            }
        }
        p=0;
        for(auto it = me.begin();it!=me.end();it++){
            a = (*it).first.first;
            b = (*it).first.second;

            c = __gcd(a,b);

            d = (a*b)/c;

            if(c==x && d==y && a>=l && a<=r && b>=l && b<=r){
                if(a==b)p++;
                else p=p+2;
            }
        }
        cout<<p<<endl;
        me.clear();
    }

}
