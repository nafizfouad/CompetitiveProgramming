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
map< ll,set<ll> >se,me;
priority_queue<pair<ll,ll> ,vector<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
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
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            pq.push({a,i+1});
        }
        while(pq.size()>1){
            a = pq.top().first;
            b = pq.top().second;

            pq.pop();
            c = pq.top().first;
            d = pq.top().second;
            pq.pop();

            if(a>0 && c>0)ss.pb({b,d});
            a--;
            c--;
            if(a>0)pq.push({a,b});
            if(c>0)pq.push({c,d});
        }
        while(pq.size())pq.pop();
        cout<<ss.size()<<endl;
        for(i=0;i<ss.size();i++)cout<<ss[i].first<<" "<<ss[i].second<<endl;
        ss.clear();
    }

}
