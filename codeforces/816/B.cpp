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
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,vv,s;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,newset >se,me;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[200006],br[200006];

int main()
{
    fast;

    //cin>>t;
    while(t--)
    {
        cin>>n>>k>>q;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            ar[a]++;
            ar[b+1]--;
        }
        e=0;
        for(i=0; i<q; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        for(i=1; i<=200000; i++)
        {
            ar[i]+=ar[i-1];
        }
        for(i=1;i<=200000;i++){
            if(ar[i]>=k)br[i]=1;
        }
      //  for(i=91;i<=100;i++)cout<<ar[i]<<endl;
        for(i=1; i<=200000; i++)
        {
            br[i]+=br[i-1];
        }
        for(i=0;i<q;i++){
            b = br[ss[i].second]-br[ss[i].first-1];
            cout<<b<<endl;
        }
    }

}
