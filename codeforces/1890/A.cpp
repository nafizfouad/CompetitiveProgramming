/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 1000000007
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
ll i,j,a,k,b,n,t=1,m,p,q,c,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,v,vv;
vector<pair<ll,ll> > ss,pp,rr;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);


int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            ma[a]++;
        }
        if(ma.size()==1)cout<<"Yes"<<endl;
        else if(ma.size()>2)cout<<"No"<<endl;
        else{
            auto it = ma.begin();
            auto ki = ma.rbegin();

            if(n%2==0){
                if((*it).second==(*ki).second)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else{
                if((abs((*it).second-(*ki).second))<=1)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
        ma.cl;
    }
}
