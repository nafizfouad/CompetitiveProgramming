/// æããä»ããææããã¨ãªã£ã¦è½ã¡ã¦ãä¿ºã®å¨ãã«è½ã¡ç¶ãã¦ãããããç§ã¯ããªãã®ãã®ã«ãªã
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
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
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
        cin>>n;
        p=n;
        v.cl;
        for(i=0; i<n; i++)
        {
            cin>>a;

            v.pb(a);
        }
        c=1;
        f=0;

        for(i=1; i<n; i++)
        {
            if(v[i]!=v[i-1])c++;
        }
        if(c==1)
        {
            cout<<1<<endl;
            for(i=0; i<n; i++)cout<<1<<" ";
            cout<<endl;
            con;
        }
        else if(c%2==0)
        {
            cout<<2<<endl;
            d=0;
            for(i=0; i<n; i++)
            {
                a = v[i];
                if(d%2==0)
                {
                    while(v[i]==a)
                    {
                        cout<<1<<" ";
                        i++;
                        if(i==n)break;
                    }
                }
                else
                {
                    while(v[i]==a)
                    {
                        cout<<2<<" ";
                        i++;
                        if(i==n)break;
                    }
                }
                d++;
                i--;
            }

            cout<<endl;
        }
        else if(c%2==1 && c==n && v[0]!=v[n-1])
        {
            cout<<3<<endl;
            d=0;

                    a=v[n-1];
            i=n-1;
                while(a==v[i]){
                    n--;
                    i--;
                }

            for(i=0; i<n; i++)
            {
                a = v[i];
                if(d%2==0)
                {
                    while(v[i]==a)
                    {
                        cout<<1<<" ";
                        i++;
                        if(i==n)break;
                    }
                }
                else
                {
                    while(v[i]==a)
                    {
                        cout<<2<<" ";
                        i++;
                        if(i==n)break;
                    }
                }
                d++;
                i--;
            }

                a=v[p-1];
            i=p-1;
                while(a==v[i]){
                    cout<<3<<" ";
                    i--;
                }

            cout<<endl;
        }

        else {
            cout<<2<<endl;

            f=0;
            d=0;
            for(i=0; i<n; i++)
            {
                a = v[i];
                if(f%2==0)
                {
                    b=0;
                    while(v[i]==a)
                    {
                        b++;
                        i++;
                        if(i==n)break;
                    }
                    if(b>1 && d==0){
                        for(j=1;j<b;j++)cout<<1<<" ";
                        cout<<2<<" ";
                        d=1;
                        f++;
                    }
                    else{
                        for(j=1;j<=b;j++)cout<<1<<" ";

                    }
                }
                else
                {
                    b=0;
                    while(v[i]==a)
                    {
                        b++;
                        i++;
                        if(i==n)break;
                    }
                    if(b>1 && d==0){
                        for(j=1;j<b;j++)cout<<2<<" ";
                        cout<<1<<" ";
                        d=1;
                        f++;
                    }
                    else{
                        for(j=1;j<=b;j++)cout<<2<<" ";

                    }
                }
                f++;
                i--;
            }

            cout<<endl;
        }
        s.cl;
        v.cl;
    }
}


