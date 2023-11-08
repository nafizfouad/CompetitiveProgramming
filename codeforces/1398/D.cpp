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
vector<ll> s,v,vv,rr,hh,pp;
vector<string > ss;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[202][202][202];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m>>l;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<m; i++)
        {
            cin>>a;
            s.pb(a);
        }
        for(i=0; i<l; i++)
        {
            cin>>a;
            vv.pb(a);
        }
        sort(v.begin(),v.end());
        sort(s.begin(),s.end());
        sort(vv.begin(),vv.end());
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=m; j++)
            {
                for(k=0; k<=l; k++)
                {
                    if(i<n && j<m)ar[i+1][j+1][k]=max(ar[i+1][j+1][k],ar[i][j][k]+v[i]*s[j]);
                    if(i<n && k<l)ar[i+1][j][k+1]=max(ar[i+1][j][k+1],ar[i][j][k]+v[i]*vv[k]);
                    if(j<m && k<l)ar[i][j+1][k+1]=max(ar[i][j+1][k+1],ar[i][j][k]+s[j]*vv[k]);
                    e = max(e,ar[i][j][k]);
                }
            }
        }
        cout<<e<<endl;
    }
}
