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
vector<ll> ss,oo,uu;
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
        cin>>n>>m;
        for(i=0;i<m-n+1;i++){
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        b = m-n+1;
        f = 0;
        while(b>1){
            if(b%2==1)f=1;
            b = b/2;
        }
        if(f==0)cout<<v[0]<<endl;
        else{
            for(i=0;i<=m;i++){
                b = i;
                c = 0;
                while(b){

                    if(b%2==1)ma[c]+=1;
                    b = b/2;
                    c++;
                }
            }
            for(i=0;i<v.size();i++){
                b = v[i];
                c = 0;
                while(b){

                    if(b%2==1)sa[c]+=1;
                    b = b/2;
                    c++;
                }
            }
            d = 0;
            for(i=0;i<=32;i++){
                if(ma[i]!=sa[i]){
                    d = d+pow(2,i);
                }
            }
            cout<<d<<endl;
        }
        v.clear();
        ma.clear();
        sa.clear();
    }
}

