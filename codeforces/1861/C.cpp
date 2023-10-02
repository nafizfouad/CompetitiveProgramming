/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
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
vector<pair<ll,pair<ll,ll> > > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>st;
        n = st.size();
        l = 0; //last sorted size

        c = 0; //size in between 0 & 1
        r = 0; //flag to see if last ele rmvd
        g = 0; //flag to see if added after rmving last ele
        x = -1; //flag to mark transition

        d = 0;  //tot size
        e = 0;  //ans flag

        for(i=0; i<n; i++)
        {
            if(st[i]=='+')
            {
                d++;
            }
            else if(st[i]=='-')
            {
                d--;
                l = min(l,d);
                if(d<r)r=0;
            }
            else if(st[i]=='0')
            {
               if(d<=1)e=1;
               if(r==0 || r>d)r=d;
            }
            else if(st[i]=='1')
            {
                l = max(l,d);
            }
            if(r<=l && r!=0)e=1;
        }
        if(e==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
