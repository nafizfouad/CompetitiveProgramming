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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh,v,vv,rr;
vector<pair<ll,ll> > pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
vector<pair<pair<ll,ll>,ll> > de,ne;
set<ll >si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        c = 1;
        v.pb(c);
        for(i=n*n-1; i>=1; i--)
        {
            d = c+i;
            if(ma[d]==0 && d<=n*n)v.pb(d),ma[d]=1,c=d;
            else v.pb(c-i),ma[c-i]=1,c=c-i;
        }
        for(i=1; i<=n; i++)
        {
            if(i%2==1)c = (n*i)-n;
            else c = n*i,c--;
            for(j=1; j<=n; j++)
            {
                cout<<v[c]<<" ";
                if(i%2==1){
                    c++;
                }
                else c--;
            }
cout<<endl;
        }
        v.clear();
        ma.clear();
    }
}
