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
map<ll,ll > ta,pa,sa,ma;
map<ll,priority_queue<ll,vector<ll>,greater<ll> > >se,me;
priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>c>>d;
        l =0;
        for(i=0;i<n;i++){
            cin>>a;
            ma[a]++;
            if(ma[a]==1)v.pb(a);
            else l = l+c;
        }
        sort(v.begin(),v.end());
        if(v[0]==1)e = ((v.size()-1)*c);
        else e=d+(v.size()*c);
        for(i=0;i<v.size();i++){
            f = v[i]-1-i;
            u = (f*d)+((v.size()-i-1)*c);
            e = min(e,u);
        }
        cout<<l+e<<endl;
        ma.clear();
        v.clear();
    }

}
