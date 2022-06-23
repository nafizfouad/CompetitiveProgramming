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
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,vv,s;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,vector<ll> >se,me;
priority_queue<ll,vector<ll> > aq,tq,pq,nq,mq,xq;
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
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        f = 0;
        for(i=0;i<n;i++){
            a = v[i];
            c = 0;
            d = 0;
            while(a){
                if(a%k){
                    ma[c]++;
                    e = 1;
                    for(j=1;j<=c;j++){
                         e = e*k;
                         if(e>1e16 || e>v[i])break;
                    }
                    if(e<=v[i])d=d+e;
                    else f=1;
                }
                c++;
                a = a/k;
            }
            if(d!=v[i]){f=1;break;}
        }

        for(auto it = ma.begin();it!=ma.end();it++){
            if((*it).second>1){f=1;break;}
        }
        if(f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        v.clear();
        ma.clear();
    }

}
