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
ll i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv,rr,hh,pp;
vector<pair<pair<ll,ll>,ll> > ss;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
map<pair<ll,ll>,ll >mee;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[1000005],br[1000005],vi[100005],cr[100005],dr[100005];

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0;i+1<n;i++){
             c=abs(v[i+1]-v[i]);
             s.pb(c);
        }
        c=0;
        d=0;
        e=1;
        f=0;
        for(i=0;i+1<n;i++){
            c = __gcd(c,s[i]);
            if(s[i]>1)f=1;
            if(c==1){
                e = max(d,e);
                d=1;
                g=s[i];
                c=s[i];
                if(i>0){
                for(j=i-1;j>=0;j--){
                 g = __gcd(s[j],g);
                 if(g==1)break;
                 d++;
                 c=g;
                }}
            }
            else d++;
        }
        e = max(d,e);
        if(f==1)e++;
        cout<<e<<endl;
        v.cl;
        s.cl;
    }
}
