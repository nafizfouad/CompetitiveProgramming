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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,vv,s;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,vector<ll> >se,me;
priority_queue<ll,vector<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[100006];

int main()
{
    fast;
    ar[0] = 1;
    ar[1] = 1;
    for(i=2; i<=100002; i++)
    {
        ar[i] = (ar[i-1]+ar[i-2])%mod;
    }
    //cin>>t;
    while(t--)
    {
        cin>>st;
        d = 1;
        for(i=0; i<st.size(); i++)
        {
            char ch = st[i];
            c = 0;
            if(st[i]=='m' || st[i]=='w')
            {
                f=1;
                break;
            }
            if(ch=='n' || ch=='u')
            {
                while(st[i]==ch)
                {
                    c++;
                    i++;
                    if(i==st.size())break;
                }
                i--;
            }
            d = (d*(ar[c]))%mod;
        }
        if(f==1)cout<<0<<endl;
        else cout<<d<<endl;
    }

}
