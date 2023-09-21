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
        cin>>st;
        n=st.size();
        e=0;
        f=0;
        l=0;
        x=1e18;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='A')
            {
                c=0;
                while(st[i]=='A')
                {
                    c++;
                    i++;
                    if(i==n)break;
                }
                x=min(x,c);
                e = e+c;
                v.pb(c);
                i--;
            }
            else if(st[i]=='B')
            {
                c=0;
                while(st[i]=='B')
                {
                    c++;
                    i++;
                    if(i==n)break;
                }
                f = f+c;
                if(c>1)l=1;
                s.pb(c);
                i--;
            }
        }

        if(v.size()==0 || s.size()==0)cout<<0<<endl;
        else if(v.size()==1)
        {
            cout<<v[0]<<endl;
        }
        else
        {
            if(st[0]=='B' || st[n-1]=='B')cout<<e<<endl;
            else{
                if(l==1)cout<<e<<endl;
                else cout<<e-x<<endl;
            }
        }
        v.cl;
        s.cl;
    }
}