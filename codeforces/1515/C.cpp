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
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,vv,s;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,vector<ll> >se,me;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >, greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
ll ar[100006];
int main()
{
    fast;

    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        d = 1;
        for(i=0; i<n; i++)
        {
            cin>>a;
            ss.pb({a,i});
        }
        sort(ss.begin(),ss.end());
        for(i=0; i<m; i++)
        {
            pq.push({0,i+1});
        }

        for(i=n-1; i>=0; i--)
        {
            a = pq.top().first;
            b = pq.top().second;

            ar[ss[i].second] = b;


            a = a+ss[i].first;
            pq.pop();
            pq.push({a,b});
        }
        b = 0;
        c = 1e18;

        while(pq.size()){
            b = max(b,pq.top().first);
            c = min(c,pq.top().first);
            pq.pop();
        }
        //cout<<b<<" "<<c<<endl;
        if(b-c<=k){
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)cout<<ar[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
        ss.clear();

    }

}
