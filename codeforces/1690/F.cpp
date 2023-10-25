/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int
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
ll i,j,a,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
long long c;
vector<ll> s,hh,v[205];
vector<long long> vv;
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

ll ar[205],ma[203];

void dfs(ll a)
{

    ar[a]=1;
    c++;
    ma[a]=1;
    for(auto x:v[a])
    {
        if(ar[x]==0)
        {
            dfs(x);
        }
    }

}

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>st;
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
            v[i+1].pb(a);
            v[a].pb(i+1);
        }
        for(i=1; i<=n; i++)
        {
            if(ar[i]==0)
            {

                ft.cl;
                pt.cl;

                for(j=1;j<=n;j++)ma[j]=0;
                dfs(i);
                for(j=0; j<n; j++)
                {
                    if(ma[s[j]]==1)
                    {
                        ft.pb(st[s[j]-1]);
                        pt.pb(st[s[j]-1]);
                    }
                    else ft.pb('0'),pt.pb('0');
                }
                c=0;
                while(1)
                {

                    c++;
                    et=ft;
                    //cout<<et<<" "<<ft<<" "<<pt<<endl;
                    ft.cl;
                    for(j=0; j<n; j++)
                    {
                        if(ma[s[j]]==1)
                        {
                            ft.pb(et[s[j]-1]);
                        }
                        else ft.pb('0');

                        if(ft==pt)break;
                    }
                    if(ft==pt)break;
                }
                vv.pb(c);
            }
        }

        c = vv[0];
        for(i=1; i<vv.size(); i++)
        {
            c = (c*vv[i])/(__gcd(vv[i],c));
        }
        cout<<c<<endl;
        for(i=0; i<n+2; i++)v[i].cl,ar[i]=0;
        s.cl;
        vv.cl;
    }
}
