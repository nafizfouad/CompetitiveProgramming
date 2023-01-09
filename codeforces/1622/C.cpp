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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,b,n,k,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,gg,cc;
vector<ll > s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        d = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            d = d+a;
        }
        sort(v.begin(),v.end());
        p = m/n;
        f = 0;
        if(d<=m)
        {
            cout<<0<<endl;
            v.clear();
            continue;
        }
        p = min(p,v[0]);
        h = (n-1)+abs(v[0]-p);
        for(j=1; j<n; j++)
        {
            f = f+v[j];
            e = ((n-j)*p);
            g = f+e;
            if(g<=m)
            {
                h = min(h,abs(v[0]-p)+n-j-1);
            }
            else
            {
                l = p-5010;
                r = p-1;
                d = -1e18;
                while(l<=r)
                {
                    k = (l+r)/2;
                    e = ((n-j)*k);
                    g = f+e;
                    //cout<<"l"<<endl;
                    if(g>m)r=k-1;
                    else l = k+1,d = max(d,k);
                }
                p = d;
                h = min(h,abs(v[0]-p)+n-j-1);
            }
        }
        cout<<h<<endl;
        v.clear();
    }

}
