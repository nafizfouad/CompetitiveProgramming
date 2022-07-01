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
vector< pair<pair<ll,ll>,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,set<ll> >se,me;
priority_queue<pair<ll,ll> ,vector<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[100006],br[100006];

int main()
{
    fast;

    //cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=1; i<=n; i++)
        {
            cin>>br[i];
            v.pb(br[i]);
        }
        for(i=0;i<m;i++){
            cin>>a>>b>>c;
            ss.pb({{a,b},c});
        }
        for(i=0;i<k;i++){
            cin>>a>>b;
            ar[a]++;
            ar[b+1]--;
        }
        for(i=1;i<=m;i++)ar[i]=ar[i]+ar[i-1];
      //  for(i=1;i<=m;i++)cout<<ar[i]<<" ";
        //cout<<endl;
        for(i=1;i<=m;i++){
            if(ar[i]){
                a = ss[i-1].first.first;
                b = ss[i-1].first.second;
                c = ss[i-1].second;
                br[a]+= c*ar[i];
                br[b+1]-= c*ar[i];
            }
        }
        for(i=1;i<=n;i++)br[i]+=br[i-1];
        c = 0;
        for(i=1;i<=n;i++)br[i]-=c,c = c+v[i-1];
        for(i=1;i<=n;i++)cout<<br[i]<<" ";

        for(i=0;i<=n+2;i++)ar[i] = 0,br[i]=0;
        cout<<endl;
        ss.clear();
        v.clear();
    }

}
