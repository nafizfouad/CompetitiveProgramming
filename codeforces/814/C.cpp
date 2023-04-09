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
vector<ll > s[130],hh,vv,v;
vector< pair<ll,ll> > pp,ss;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[1600][130],br[130];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>st;
        cin>>q;
        for(i=0; i<q; i++)
        {
            cin>>a;
            char ch;
            cin>>ch;
            ss.pb({a,ch});
        }
        for(i=97; i<=122; i++)
        {
            for(j=0; j<n; j++)
            {
                if(st[j]!=i)
                {
                    s[i].pb(j);
                }
            }
        }
        for(i=97; i<=122; i++)
        {
            d=0;
            for(j=0; j<n; j++)
            {
                if(st[j]==i)
                {c = 0;
                    while(st[j]==i){
                        j++;
                        c++;
                        if(j==n)break;
                    }
                    d=max(c,d);
                }
            }
            br[i]=d;
        }
        for(i=97; i<=122; i++)
        {
            for(k=1; k<=n; k++)
            {
                p=br[i];
                for(j=0; j<s[i].size(); j++)
                {
                    if(j==0)l=0;
                    else l = s[i][j-1]+1;
                    if(j+k>=s[i].size())r=n-1;
                    else r = s[i][j+k]-1;
                    p = max(p,r-l+1);
                }
                ar[k][i]=p;
            }

        }
        for(i=0;i<q;i++){
            a = ss[i].first;
            b = ss[i].second;
            cout<<ar[a][b]<<endl;
        }
    }

}
