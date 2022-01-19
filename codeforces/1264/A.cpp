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
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        s.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<n; i++)
        {
            c = v[i];
            d = 0;
            while(v[i]==c)
            {
                d++;
                i++;
                if(i==n)break;
            }
            s.pb(d);
            i--;
        }
        e = n/2;
        if(n%2==1)e++;
        d=0;
        for(i=s.size()-1; i>=0; i--)
        {
            d = d+s[i];
            if(d>=e)
            {
                c=i-1;
                break;
            }
        }
        if(c<2)
        {
            cout<<0<<" "<<0<<" "<<0<<endl;
            continue;
        }
        d=0;
        g = c;
        for(i=c; i>1; i--)
        {
            d = d+s[i];
            if(d>s[0])
            {
                c=i-1;
                break;
            }
        }
        if(c<1 || d<=s[0])
        {
            cout<<0<<" "<<0<<" "<<0<<endl;
            continue;
        }
        e = 0;
        for(i=c; i>0; i--)
        {
            e = e+s[i];
        }
        if(e>s[0])cout<<s[0]<<" "<<e<<" "<<d<<endl;
        else
        {
            d=0;
            for(i=1; i<g; i++)
            {
                d = d+s[i];
                if(d>s[0])
                {
                    c=i+1;
                    break;
                }
            }
            e=0;
            for(i=c;i<=g;i++)e=e+s[i];
            if(e>s[0] && d>s[0])cout<<s[0]<<" "<<d<<" "<<e<<endl;
            else cout<<0<<" "<<0<<" "<<0<<endl;
        }
    }
}
