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
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[200006];

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            me[a].pb(i);

        }
        c = 0;
        l = 0;
        for(auto it = me.begin();it!=me.end();it++){
			a = (*it).first;
			for(i=0,j=1;j<=m && i<me[a].size();j++,i++){
				v.pb(me[a][i]);
			}
        }
        d = v.size()%m;
        //cout<<v.size()<<endl;
        c = 1;
        for(i=0;i+d<v.size();i++){
			ar[v[i]]=c;
			c++;
			if(c>m)c=1;
        }
        for(i=0;i<n;i++)cout<<ar[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)ar[i]=0;
        me.clear();
        v.clear();
    }

}