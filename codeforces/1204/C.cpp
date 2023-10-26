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
map<ll,ll > ta,pa,sa;
map<ll,vector<ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ve[205][200],br[202][202];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                char ch;
                cin>>ch;
                if(ch=='1')ve[i][j]=1;
                else if(i==j)ve[i][j]=0;
                else ve[i][j]=1e18;
            }
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a;
            s.pb(a);
        }

        for(j=1; j<=n; j++)
        {
            for(i=1; i<=n; i++)
            {
                for(k=1; k<=n; k++)
                {

                        if(ve[i][k]>ve[j][k]+ve[i][j])
                        {
                            ve[i][k]=ve[j][k]+ve[i][j];
                        }

                }
            }
        }
        ss.pb({s[0],0});
        for(i=2;i<m;i++){
            a = ss[ss.size()-1].first;
            b = i-ss[ss.size()-1].second;
            if(ve[a][s[i]]<b)ss.pb({s[i-1],i-1});
        }
        ss.pb({s[m-1],0});
        cout<<ss.size()<<endl;
        for(i=0;i<ss.size();i++){
            cout<<ss[i].first<<" ";
        }
        cout<<endl;
    }
}
