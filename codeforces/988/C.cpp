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
vector<ll > s,v,vv;
vector<vector<pair<ll,ll> > > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<pair<ll,ll> > si,li;
newset mi;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a;
            ma.clear();
            v.clear();
            c= 0;
            for(j=0; j<a; j++)
            {
                cin>>b;
                c = c+b;
                v.pb(b);
            }
            for(j=0; j<a; j++)
            {
                ma[c-v[j]]++;
                if(ma[c-v[j]]==1)se[c-v[j]].pb(i+1),me[c-v[j]].pb(j+1);
                if(se[c-v[j]].size()==2 && f==0)
                {
                    f = 1;
                    //cout<<c-v[j]<<endl;
                    x = se[c-v[j]][0];
                    y = me[c-v[j]][0];
                    l = se[c-v[j]][1];
                    r = me[c-v[j]][1];
                    break;
                }
            }
        }

        if(f==0)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<endl;
            cout<<l<<" "<<r<<endl;
        }
    }
}
