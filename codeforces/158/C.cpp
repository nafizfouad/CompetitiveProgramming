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
vector<ll> s,v,vv;
vector<pair<ll,ll> > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<string> de,ne;
multiset<pair<ll,ll> > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>st;
            if(st[0]=='p')
            {
                cout<<'/';
                {
                    for(j=0; j<de.size(); j++)cout<<de[j];
                }
                cout<<endl;
            }
            else
            {
                cin>>et;
                pt.clear();
                k = 0;
                if(et[0]=='/')de.clear(),k=1;
                for(j=k; j<et.size(); j++)
                {
                    if(et[j]=='.')
                    {
                        j=j+2;
                        de.pop_back();
                        pt.clear();
                    }
                    else
                    {
                        pt.pb(et[j]);
                        if(et[j]=='/')
                        {
                            de.pb(pt);
                            pt.clear();
                        }
                    }
                }
                if(pt.size())pt.pb('/'),de.pb(pt);
            }
        }

    }
}
