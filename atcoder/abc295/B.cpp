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

char ar[26][26];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(ar[i][j]>='1' && ar[i][j]<='9'){
                    for(k=0;k<n;k++){
                        for(l=0;l<m;l++){
                            c = abs(i-k)+abs(j-l);
                            d = ar[i][j]-'0';
                            if(c<=d && ar[k][l]=='#')ar[k][l]='.';
                        }
                    }
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(ar[i][j]>='1' && ar[i][j]<='9')cout<<'.';
                else cout<<ar[i][j];
            }
            cout<<endl;
        }
    }

}
