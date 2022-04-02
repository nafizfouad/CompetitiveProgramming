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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<vector<ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
        {
           cin>>n;
           l = n;
           d = -1;
           for(i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n = n/i;
                    ma[i]++;
                    if(ma[i]>d){
                        d = ma[i];
                        e = i;
                    }
                }
            }
           }
           if(n>1){
            ma[n]++;
            if(ma[n]>d){
                d= ma[n];
                e= n;
            }
           }
           cout<<d<<endl;
           c = 1;
           for(i=1;i<=d;i++)c = c*e;
           f = l/c;
           for(i=0;i+1<d;i++)cout<<e<<" ";
           cout<<f*e<<endl;
           ma.clear();
        }
}

