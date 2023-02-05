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
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
multiset<pair<ll,ll> >si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>w>>h;
        for(i=0;i<n;i++){
            cin>>a;
            ss.pb({a-w,a+w});
        }
        for(i=0;i<n;i++){
            cin>>a;
            pp.pb({a-h,a+h});
        }
        f = 0;
        for(i=0;i<n;i++){
            a = ss[i].first;
            b = ss[i].second;
            c = pp[i].first;
            d = pp[i].second;

            l = d-w;
            x = a+w-l;

            r = c+w;
            y = a+w-r;

            u = min(x,y);
            o = max(x,y);
           // cout<<u<<" "<<o<<endl;
            ma[u]++;
            ma[o+1]--;
        }
        c = 0;
        for(auto it = ma.begin();it!=ma.end();it++){
            c=c+(*it).second;
            if(c==n)f=1;
        }
        if(f==0)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
        ss.clear();
        pp.clear();
        ma.clear();
    }
}
