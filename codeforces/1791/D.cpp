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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<string > pp,ss,oo,uu;
map<char,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char > de,ne;
multiset<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

ll ar[200006],br[200006];

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>st;
        c = 0;
        d = 0;
        f = 0;
        for(i=0;i<n;i++){
           ma[st[i]]++;
           ar[i]=ma.size();
        }
        for(i=n-1;i>=0;i--){
           sa[st[i]]++;
           br[i]=sa.size();
        }
        for(i=0;i+1<n;i++){
           d = max(d,ar[i]+br[i+1]);
        }
        cout<<d<<endl;
        ma.clear();
        sa.clear();
        for(i=0;i<=n;i++)ar[i]=0,br[i]=0;
    }
}
