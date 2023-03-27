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
vector<ll > s,hh,vv,v;
vector<pair<ll,ll> > pp,ss;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
         c= 1e18;
         d=-1e18;
         f =0;
        for(i=0; i<n; i++)
        {
          cin>>a;
          d = max(a,d);
          c = min(a,c);
          v.pb(a);
          if(i>0)f = f+abs(v[i]-v[i-1]);
        }
        l = max(0LL,c-1);
        r = max(0LL,m-d);
        o = 0;
        for(i=0;i<n;i++){
            if(i==0){
                if(l==0)x=0;
                else x=v[i]-1;
                if(r==0)y=0;
                else y = m-v[i];
                ss.pb({x,o});
                pp.pb({y,o});
                o++;
            }
            if(i+1<n){
                    if(l==0)x=0;
                else x = (min(v[i],v[i+1])-1)*2;
            if(r==0)y=0;
                else y = (m-max(v[i],v[i+1]))*2;
                ss.pb({x,o});
                pp.pb({y,o});
                o++;
            }
            if(i==n-1){
                if(l==0)x=0;
                else x=v[i]-1;
                if(r==0)y=0;
                else y = m-v[i];
                ss.pb({x,o});
                pp.pb({y,o});
                o++;
            }
        }
        sort(ss.begin(),ss.end());
        sort(pp.begin(),pp.end());

            a = ss[0].first;
            b = ss[0].second;
            c = pp[0].first;
            d = pp[0].second;
            if((b!=d) || (b==d && b!=0 && b!=n)){
                f = f+a+c;
            }
            else{
                j = (min(a,c)*2)+max(a,c);
                k = ss[0].first+pp[1].first;
                h = ss[1].first+pp[0].first;
                j = min(j,k);
                j = min(j,h);
                f = f+j;
            }
        cout<<f<<endl;
        ss.clear();
        pp.clear();
        v.clear();
    }

}
