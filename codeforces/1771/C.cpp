#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh,vv[105],v;
vector<pair<ll,ll> > pp,ss;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[31650],cr[31650];

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
  //  cout<<v.size()<<endl;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            ma[a]++;
        }
        f = 0;
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            a = (*it).first;
            for(i=0; i<v.size() && v[i]*v[i]<=a; i++)
            {
                if(a%v[i]==0)
                {
                    if(cr[v[i]]==1){f=1;break;}
                    while(a%v[i]==0)
                    {
                        a = a/v[i];
                    }
                    cr[v[i]]=1;
                }
            }
            if((*it).second>1 && (*it).first>=2)f=1;
            if(f==1)break;
            if(a>1){
                if(sa[a]==1){f=1;break;}
                if(a<=31640){
                    if(cr[a]==1){
                        f=1;break;
                    }
                    cr[a]=1;
                }
                sa[a]=1;
            }
        }

        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        for(i=0;i<=31640;i++)cr[i]=0;
        ma.clear();
        sa.clear();
    }

}
