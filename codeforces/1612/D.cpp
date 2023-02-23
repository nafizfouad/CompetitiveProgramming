#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<pair<ll,ll>, pair<ll,ll> > > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >li,si;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

void rec(ll a,ll b){

if(me[{a,b}]==1)return;
me[{a,b}]=1;
ll c = abs(a-b);
si.insert(a);
si.insert(b);
rec(c,b);
rec(a,c);

}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;
//        rec(n,m);
//        for(auto v : si)cout<<v<<" ";
//        cout<<endl;
//        cout<<si.size()<<endl;
//        si.clear();
//        me.clear();
l = 0;
if(n<m)swap(n,m);
        while(1){

            b = n-m;
            if(n==k || m==k){l=1;break;}
            if(b==0)break;
            c = max(max(n,m),b);
            d = min(n,min(m,b));
            v.pb(n);
            v.pb(m);
            v.pb(b);
            sort(v.begin(),v.end());
            v.clear();
            e = (c-d)/d;
            f = (e*d)+(v[1]%d);
            p = v[1]%d;
            if(k==n || k==m || (k<=f && k%d==p)){
                l = 1;
                break;
            }
            n = d+p;
            m = d;
            if(m-n==n)break;
        }
        if(l==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

