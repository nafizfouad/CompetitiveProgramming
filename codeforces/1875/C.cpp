/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
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
ll i,j,n,t=1,m,p,q,e,f,y,z,h,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[31650],cr[31650],dr[31650];

long long a,c,d,k,g,r,l,br[70],b;

void sieve()
{

    for(i=4; i<=31640; i=i+2)
    {
        ar[i]=1;
    }
    for(i=3; i*i<=31640; i=i+2)
    {
        if(ar[i]==0)
        {
            for(j=i*i; j<=31640; j=j+(2*i))
            {
                ar[j] = 1;
            }
        }
    }
    for(i=2; i<=31640; i++)
    {
        if(ar[i]==0)v.pb(i);
    }

}

int main()
{
    fast;

    sieve();
    br[0]=1;
    c=1;
    for(i=1;i<=60;i++)c=c*2,br[i]=c;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        b=n;
        for(i=0; v[i]*v[i]<=b && i<v.size(); i++)
        {
            if(b%v[i]==0)
            {
                while(b%v[i]==0)
                {
                    b = b/v[i];
                    cr[v[i]]++;
                    vv.pb(v[i]);
                }
            }
        }
        o=-1;
        if(b>1){
            if(b==2)cr[2]++,vv.pb(v[i]);
            else o=b;
        }
        b=m;
        for(i=0; v[i]*v[i]<=b && i<v.size(); i++)
        {
            if(b%v[i]==0)
            {
                while(b%v[i]==0)
                {
                    b = b/v[i];
                    dr[v[i]]++;
                }
                s.pb(v[i]);
            }
        }
        u=-1;
        if(b>1){
            if(b==2)s.pb(2),dr[2]++;
            else u=b;
        }
        f=0;
        c=0;
        for(auto x:s)
        {
            if(x==2)
            {
                c = dr[2]-cr[2];
                c = max(c,0LL);
            }
            else if(cr[x]<dr[x])
            {
                f=1;
                break;
            }
        }
        //cout<<'l'<<endl;
        if(u!=-1){
            if(u<=31640){
                if(cr[u]<1 && o!=u)f=1;
            }
            else if(o!=u)f=1;
        }
        //cout<<'l'<<endl;
        if(f==1)cout<<-1<<endl;
        else if(c==0)cout<<c<<endl;
        else
        {
            d=0;
            a=n;
            for(i=1; i<=c; i++)
            {
                d = d+a;
                a=a*2;
            }
            e = a/m;
            //cout<<a<<" "<<e<<" "<<d<<" "<<c<<endl;
            f=0;
            g=0;
            while(e)
            {
                if(e%2==1)
                {
                    k=br[f];
                    if(f<=c)g = g+k-1;
                    else{
                        r=br[c];
                        l = (k/r)*(r-1);
                        //cout<<l<<" "<<k<<endl;
                        g = g+l;
                    }
                }
                e = e/2;
                f++;
            }
            //cout<<g<<endl;
            d = d-(g*m);
            cout<<d<<endl;
        }
        for(i=0;i<vv.size();i++)cr[vv[i]]=0;
        for(i=0;i<s.size();i++)dr[s[i]]=0;
        s.cl;
        vv.cl;
    }
}

