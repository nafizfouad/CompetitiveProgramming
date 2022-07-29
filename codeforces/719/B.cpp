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
vector<ll > s,v,vv;
vector<pair<ll,ll> > ss,pp,hh;
map<string,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de[5],ne;
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

        cin>>n;
        cin>>st;
        et = st;
        for(i=0;i<n;i++){
            if(i%2==0){
                if(st[i]=='r')de[0].pb(i);
                else de[1].pb(i);
            }
            else if(i%2==1){
                if(st[i]=='r')de[2].pb(i);
                else de[3].pb(i);
            }
        }
        for(i=0;i<n;i++){
            if(i%2==0){
                if(st[i]!='r'){
                    if(de[2].size()){
                        swap(st[i],st[de[2].front()]);
                        de[2].pop_front();
                    }
                    else st[i]='r';
                    de[1].pop_front();
                    c++;
                }
            }
            else if(i%2==1){
                if(st[i]!='b'){
                    if(de[1].size()){
                        swap(st[i],st[de[1].front()]);
                        de[1].pop_front();
                    }
                    else st[i]='b';
                    c++;
                    de[2].pop_front();
                }
            }
        }
        st = et;
        for(i=0;i<n;i++){
            if(i%2==0){
                if(st[i]!='b'){
                    if(de[3].size()){
                        swap(st[i],st[de[3].front()]);
                        de[3].pop_front();
                    }
                    else st[i]='b';
                    d++;
                    de[0].pop_front();
                }
            }
            else if(i%2==1){
                if(st[i]!='r'){
                    if(de[0].size()){
                        swap(st[i],st[de[0].front()]);
                        de[0].pop_front();
                    }
                    else st[i]='r';
                    d++;
                    de[3].pop_front();
                }
            }
        }
        cout<<min(c,d)<<endl;
    }
}
