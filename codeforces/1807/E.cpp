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
map<char,vector<ll> > ta,pa,sa,ma;
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
        cin>>n;
        v.pb(0);
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=1;i<=n;i++){
            v[i]+=v[i-1];
        }
        l=1;
        r=n;
        while(l<=r){
            m = (l+r)/2;
            cout<<"? "<<m-l+1<<" ";
            for(i=l;i<=m;i++)cout<<i<<" ";
            cout<<endl;
            cin>>p;
            d = v[m]-v[l-1];
            if(p>d){
                if(r==m)break;
                r = m;
            }
            else l =m+1;
        }
        cout<<"! "<<r<<endl;
        v.clear();
    }

}