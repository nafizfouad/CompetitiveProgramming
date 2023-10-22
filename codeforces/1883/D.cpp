#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 998244353
#define mod1 1000000009
#define cl clear()
#define con continue
//#define endl '\n'
#define MAXN 200003
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,multiset<ll> > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>st>>a>>b;
        if(st[0]=='+'){


         if(si.size()==0)cout<<"no"<<endl;
         else{
                if(f==1)cout<<"yes"<<endl;
         else{
            auto it = si.rbegin();
            if((*it)>b)f=1,cout<<"yes"<<endl;
            else{
                auto ki = li.lower_bound(a);
                if(ki!=li.begin())f=1,cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            }}
         }

            si.insert(a);
            li.insert(b);
        }
        else{

            si.erase(si.find(a));
            li.erase(li.find(b));

            if(si.size()==0)f=0,cout<<"no"<<endl;
            else{
            auto it = si.rbegin();
            auto ki = li.begin();

            if((*it)<=(*ki))f=0,cout<<"no"<<endl;
            else cout<<"yes"<<endl;}

        }

    }
}

