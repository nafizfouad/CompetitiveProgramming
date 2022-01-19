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
map<ll,char > ta,pa,sa,ma;
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
    //cin>>t;
    while(t--)
    {
        st = "codeforces";
        for(i=0; i<10; i++)
        {
            ma[i+1] = st[i];
        }
        cin>>n;
        for(i=1; i<=40; i++)
        {
            a = pow(i,10);
            if(a<=n)b=a,e=i;
            else break;
        }
        f = 0;
        if(b<n)
        {
            for(i=1; i<=10; i++)
            {
                c=1;
                for(j=1; j<=i; j++)c=c*(e+1);
                for(j=i+1; j<=10; j++)c=c*e;
                if(c>=n)
                {
                    f=i;
                    break;
                }
            }
        }
        for(i=1; i<=10; i++)
        {
            for(j=1; j<=e; j++)cout<<ma[i];
            if(f)cout<<ma[i],f--;
        }
        cout<<endl;
    }
}
