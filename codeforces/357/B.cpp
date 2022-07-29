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
vector<pair<ll,ll> > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<string> de,ne;
multiset<pair<ll,ll> > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;


        for(i=0; i<m; i++)
        {
            cin>>a>>b>>c;
            if(ma[a]==0 && ma[b]==0 && ma[c]==0)
            {
                ma[a]=1;
                ma[b]=2;
                ma[c]=3;
            }
            else if(ma[a]!=0)
            {
                if(ma[a]==1){
                    ma[b]=2;
                    ma[c]=3;
                }if(ma[a]==2){
                    ma[b]=1;
                    ma[c]=3;
                }if(ma[a]==3){
                    ma[b]=1;
                    ma[c]=2;
                }
            }
            else if(ma[b]!=0)
            {
                if(ma[b]==1){
                    ma[a]=2;
                    ma[c]=3;
                }if(ma[b]==2){
                    ma[a]=1;
                    ma[c]=3;
                }if(ma[b]==3){
                    ma[a]=1;
                    ma[c]=2;
                }
            }
            else if(ma[c]!=0)
            {
             if(ma[c]==1){
                    ma[b]=2;
                    ma[a]=3;
                }if(ma[c]==2){
                    ma[b]=1;
                    ma[a]=3;
                }if(ma[c]==3){
                    ma[b]=1;
                    ma[a]=2;
                }
            }

        }
        for(i=0;i<n;i++)cout<<ma[i+1]<<" ";
        cout<<endl;
    }
}
