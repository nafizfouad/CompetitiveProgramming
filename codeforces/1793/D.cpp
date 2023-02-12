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
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            ma[a] = i+1;
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            sa[a] = i+1;
        }
        l = min(sa[1],ma[1]);
        r = max(sa[1],ma[1]);
        c = l-1;
        d = n-r;
        c = (c*(c+1))/2;
        d = (d*(d+1))/2;
        p = 0;
        if(r>l)
        {
            p = (r-l)-1;
            p = (p*(p+1))/2;
        }

        e = c+d+p+1;
        //cout<<e<<endl;
        for(i=2; i<=n; i++)
        {
            a = min(sa[i],ma[i]);
            b = max(sa[i],ma[i]);
            if((a>=l && a<=r) || (b>=l && b<=r))
            {
                l =min(l,a);
                r = max(r,b);
            }
            else if(b<l)
            {
                f = l-b;
                g = n-r+1;
                e = e+(f*g);
                l = a;
            }
            else if(a>r)
            {
                e = e+ (l*(a-r));
                r = b;
            }
            else{
                e = e+((l-a)*(b-r));
                l = a;
                r = b;
            }
            //cout<<e<<" "<<i<<endl;
        }
        cout<<e<<endl;
        ma.clear();
        sa.clear();
    }
}
