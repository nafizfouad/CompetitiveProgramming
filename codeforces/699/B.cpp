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
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv;
vector<pair<ll,ll > > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de[5],ne;
set<ll > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

char ar[1006][1006];

int main()
{
    fast;

   // cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){
                c = 0;
            for(j=0;j<m;j++){
                cin>>ar[i][j];
                if(ar[i][j]=='*')c++,d++;
            }
            ma[i] = c;
        }
        for(i=0;i<m;i++){
                c = 0;
            for(j=0;j<n;j++){

                if(ar[j][i]=='*')c++;
            }
            sa[i] = c;
        }
        //cout<<ma[2]<<" "<<sa[2]<<" "<<d<<endl;
        for(i=0;i<n;i++){
                c = 0;
            for(j=0;j<m;j++){

                if(ar[i][j]=='*')d++;
                if(ma[i]+sa[j]==d){
                    cout<<"YES"<<endl;
                    cout<<i+1<<" "<<j+1<<endl;
                    f=1;
                    break;
                }
                if(ar[i][j]=='*')d--;
            }
            if(f==1)break;
        }
        if(f==0)cout<<"NO"<<endl;
    }
}
