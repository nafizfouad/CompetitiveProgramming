/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
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

ll ar[10004];

int main()
{
    fast;

    cin>>t;

    while(t--)
    {

          cin>>n;
          for(i=0;i<n+2;i++)ar[i]=-1;
          for(i=0;i<n;i++){
            if(ar[i]==-1){
                cout<<"? "<<i+1<<endl;
                cin>>a;
                a--;
                cout<<"? "<<i+1<<endl;
                cin>>b;
                b--;
                vv.cl;
                vv.pb(b);
                while(a!=b){
                    cout<<"? "<<i+1<<endl;
                    cin>>b;
                    b--;
                    vv.pb(b);
                }
                for(j=0;j<vv.size();j++){
                    ar[vv[j]]=vv[(j+1)%vv.size()];
                }
            }
          }
          cout<<"! ";
          for(i=0;i<n;i++)cout<<ar[i]+1<<" ",ar[i]=-1;
          cout<<endl;

    }
}


