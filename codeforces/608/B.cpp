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
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<map<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>st;
        cin>>et;
        for(i=0;i<et.size();i++){
           if(et[i]=='0')v.pb(1),s.pb(0);
           else v.pb(0),s.pb(1);
        }
        for(i=1;i<v.size();i++)v[i]+=v[i-1],s[i]+=s[i-1];
        b = et.size()-st.size();
        d = 0;
        for(i=0;i<st.size();i++){
            a = i+b;
            if(i==0){
                if(st[i]=='0')d=d+s[a];
                else d=d+v[a];
            }
            else if(st[i]=='0'){
                d = d+s[a]-s[i-1];
            }
            else d=d+v[a]-v[i-1];
        }
        cout<<d<<endl;
    }
}
