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
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        ma.clear();
        v.clear();
        s.clear();
        cin>>n;
        f=0;
        r = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            f = f+a;
            if(f==0)r++;
            v.pb(a);
            if(a==0)s.pb(i);
        }
        c = 0;
        d = 0;
        if(s.size()==0){
            cout<<r<<endl;
        }
        else{
            
        
        for(i=0; i<s[0]; i++)
        {
            c = c+v[i];
            if(c==0)d++;
        }
        ma[c]++;
        for(i=0; i<s.size(); i++)
        {
            if(i==s.size()-1)
            {
                e = 1;
                f = c;
                for(j=s[i]+1; j<n; j++)
                {
                    c = c+v[j];
                    ma[c]++;
                    if(ma[c]>e)
                    {
                        e = ma[c];
                        f = c;
                        l = j;
                    }
                }
                d = d+e;
            }
            else
            {
                e = 1;
                f = c;
                for(j=s[i]+1; j<s[i+1]; j++)
                {
                    c = c+v[j];
                    ma[c]++;
                    if(ma[c]>e)
                    {
                        e = ma[c];
                        f = c;
                        l = j;
                    }
                }
                d = d+e;
                c = 0;
                for(j=l+1; j<=s[i+1]; j++)
                {
                    c = c+v[j];
                }
                ma.clear();
                ma[c]++;
            }
        }
        cout<<d<<endl;}
        
    }

}
