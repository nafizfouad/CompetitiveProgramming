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
vector<ll> v,vv,s;
vector< pair<pair<ll,ll>,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[505][505];


int main()
{
    fast;

   // cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ar[i][i];
        }

        l = 0;
        for(i=0; i<n; i++)
        {
            a = i;
            b = i;
            for(j=1; j<ar[i][i]; j++)
            {
                c = a;
                d = b-1;
                e = a+1;
                f = b;
              //  cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<j<<" "<<ar[i][i]<<" "<<i<<endl;
                if(d>=0 && me[ {c,d}]==0)
                {
                    ar[c][d] = ar[i][i];
                    a = c;
                    b = d;
                    me[ {c,d}] = 1;
                }
                else if(e>=0 && e<n && me[ {e,f}]==0)
                {
                    a  = e;
                    b = f;
                    me[ {e,f}] = 1;
                    ar[e][f] = ar[i][i];
                }
                else
                {
                    //cout<<i<<" "<<e<<" "<<me[{e,f}]<<endl;
                    l=1;
                    break;
                }
            }
            if(l==1)break;
        }
        if(l==1)cout<<-1<<endl;
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<=i; j++)cout<<ar[i][j]<<" ";
                cout<<endl;
            }
            for(i=0; i<n+2; i++)
            {
                for(j=0; j<n+2; j++)ar[i][j]=0;
            }
        }
        me.clear();
    }

}
