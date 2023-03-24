#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
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
vector<ll > s,hh,vv,v;
vector<vector<ll> > pp,ss;
map<char,ll > ta,pa,sa,ma;
map<pair<char,char>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[306][306];



int main()
{
    fast;

    c=0;
        for(i=0;i<256;i=i+2){
            for(j=0;j<256;j=j+2){
                ar[i][j]=c;
                ar[i+1][j]=c+2;
                ar[i+1][j+1]=c+3;
                ar[i][j+1]=c+1;
                 c= c+4;
            }

        }

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        cout<<n*m<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
