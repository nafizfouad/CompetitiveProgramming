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
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s;
vector< pair<ll,ll> > ss,pp,vv,hh;
map<ll,ll > ta,pa,sa,ma;
map< pair<pair<ll,ll>, ll>,ll >se,me;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c =0;
        l = 1;
        r = n;
        while(l<r)
        {

            a = (l+r)/2;
            cout<<"? "<<l<<" "<<a<<endl;
            c = 0;
            x = -1e18;
            y = 1e18;
            for(i=l; i<=a; i++)
            {
                cin>>b;
                if(b<=a && b>=l)
                {
                    u=b,c++;
                    x = max(x,b);
                    y = min(y,b);
                }
            }
            if(c==1)
            {
                cout<<"! "<<u<<endl;
                f=1;
                break;
            }
            else if(c%2==0)l = a+1;
            else l = y, r = x;
            if(l==r)
            {
                cout<<"! "<<l<<endl;
                break;
            }
        }
    }
}
