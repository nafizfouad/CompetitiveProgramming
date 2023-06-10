/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
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
#define cl clear()
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
vector<ll > s,v,vv[100005],rr;
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        char ar[600][600];
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            c=0;
            for(j=1; j<=m; j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]=='#')c++;
            }
            if(c>0)ma[i]=c;
            if(c>0)d = max(c,d);
        }
        for(i=1; i<=n; i++)
        {
            if(ma[i]!=0)
            {
                if(ma[i]<d)
                {
                    p=i;
                }
                else if(f==0)
                {
                    f=1;
                    for(j=1; j<=m; j++)
                    {
                        if(ar[i][j]=='#')
                        {
                            //cout<<i<<" "<<j<<endl;
                            while(ar[i][j]=='#')
                            {
                                v.pb(j);
                                j++;
                                if(j>m)break;
                            }
                        }
                    }
                }
            }
        }
        //cout<<p<<" "<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            if(ar[p][v[i]]!='#')
            {
                cout<<p<<" "<<v[i]<<endl;
                break;
            }
        }
    }
}
