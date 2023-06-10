/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 1000000007
#define cl clear()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

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
            v.pb(a);
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        for(i=1; i<n; i=i+2)
        {
            s.pb(v[i]);
            s.pb(v[i+1]);
            vv.pb(v[i+1]-v[i]);
        }
        for(i=1; i<vv.size(); i++)vv[i]+=vv[i-1];

        for(i=0; i<m; i++)
        {
            a = ss[i].first;
            e = ss[i].second;
            auto it=lower_bound(s.begin(),s.end(),a);
            if(it==s.end())cout<<0<<endl;
            else{
                b = it-s.begin();
                if(b%2==1)b--;
                l = (b/2);
            }
            auto ki=lower_bound(s.begin(),s.end(),e);
            if(ki==s.end())--ki;
            else{
                c = ki-s.begin();
                if(c%2==0)c--;
                if(c<0){cout<<0<<endl;continue;}
                r = (c/2);
            }
            //cout<<r<<" "<<l<<endl;
            if(l>0){
            x = vv[r]-vv[l-1];}
            else x= vv[r];
            //cout<<a<<" "<<s[b]<<" "<<x<<endl;
            if(a>s[b])x = x-(a-s[b]);
            //cout<<x<<endl;
            if(s[c]>e)x = x-(s[c]-e);
            cout<<x<<endl;
        }
    }
}
