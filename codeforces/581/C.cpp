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
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv;
vector<pair<ll,ll> > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<string> de,ne;
multiset<ll > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            c = 10-(a%10);
            if(c==10)c=0;
            ss.pb({c,a});
        }
        sort(ss.begin(),ss.end());
        p = n;
        for(i=0; i<p; i++)
        {
            m = m-ss[i].first;
            if(m>=0)ss[i].second+=ss[i].first;
            d = d+(ss[i].second/10);

        }
        if(m)
        {
            for(i=0; i<p; i++)
            {
              while(ss[i].second<100){
                m = m-10;
                if(m>=0){
                    ss[i].second+=10;
                    d++;
                }
                else break;
              }
              if(m<10)break;
            }
        }
        cout<<d<<endl;
    }
}
