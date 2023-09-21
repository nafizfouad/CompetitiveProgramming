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
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<deque<ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<string,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<pair<ll,ll> > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
        }
        x=0;
        for(i=0; i+1<n; i++)
        {
            if((s[i]%s[i+1])==0)
            {
                de.cl;
                while((s[i]%s[i+1])==0)
                {
                    de.pb(v[i]);
                    i++;
                    if(i==n-1){x=1;break;}
                }
                de.pb(v[i]);
                ss.pb(de);
                de.cl;
            }
            else de.cl,de.pb(v[i]),ss.pb(de);
        }
        if(x==0)de.cl,de.pb(v[n-1]),ss.pb(de);
        e =0;
        for(i=0; i<ss.size(); i++)
        {
            c=0;
            p=0;
            for(j=0; j<ss[i].size(); j++)
            {
                //cout<<ss[i][j]<<" ";
                c = c+ss[i][j];
                if(c>k)
                {
                    while(c>k)
                    {
                        c = c-ss[i][p];
                        p++;
                        if(c==0)break;
                    }
                    e = max(e,j-p+1);
                }
                else
                {
                    e = max(e,j-p+1);
                }
            }
            // cout<<endl;
        }
        cout<<e<<endl;
        ss.cl;
        v.cl;
        s.cl;
        de.cl;
    }
}
