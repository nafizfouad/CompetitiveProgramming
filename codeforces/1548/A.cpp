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
    //cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            if(a>b)li.insert(b),ma[b]++;
            else li.insert(a),ma[a]++;
        }
        cin>>k;
        for(i=0; i<k; i++)
        {
            cin>>a;
            if(a==3)
            {
                cout<<n-li.size()<<endl;
            }
            else if(a==1)
            {
                cin>>a>>b;
                if(a>b)li.insert(b),ma[b]++;
                else li.insert(a),ma[a]++;
            }
            else if(a==2)
            {
                cin>>a>>b;
                if(a>b)
                {
                    ma[b]--;
                    if(ma[b]==0)li.erase(b);
                }
                else
                {
                    ma[a]--;
                    if(ma[a]==0)li.erase(a);
                }
            }
        }
    }

}