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
vector<pair<pair<ll,ll>,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,pair<ll,ll> > ta,pa,sa,ma;
map<ll,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<pair<ll,ll> >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n==1)cout<<0<<" "<<1<<endl;
        else if(n%2==0)cout<<n/2<<" "<<n/2<<endl;
        else
        {
            a = n/2;
            b = n/2+1;

            c=a;
            f = 0;
            while(c)
            {
                e = c%10;
                if(e!=9)break;
                c = c/10;
                f++;
            }
            d = b;
            while(d)
            {
                e = d%10;
                if(e!=0)break;
                d = d/10;
            }
            if(c!=0){
                cout<<c;
            }
            p = f/2;
            if(f%2==1)p++;
            for(i=0;i<p;i++)cout<<5;
            for(i=0;i<f-p;i++)cout<<4;
            cout<<" ";
            cout<<d;
            for(i=0;i<p;i++)cout<<4;
            for(i=0;i<f-p;i++)cout<<5;
            cout<<endl;
        }
    }
}
