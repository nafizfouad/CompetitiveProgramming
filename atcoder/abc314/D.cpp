/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define cl clear()
#define mod 1000000007
//#define endl '\n'
#define MAXN 32000
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
map<ll,vector<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>st;
        cin>>m;
        f=-1;
        e=-1;
        for(i=0;i<m;i++){
            cin>>a>>b;
            char ch;
            cin>>ch;
            if(a==1){
                st[b-1]=ch;
            }
            else if(a==2){
                f=i;
            }
            else{
                e=i;
            }
            ss.pb({b,c});
        }
        for(i=m-1;i>=0;i--){
            if(i==e){
                for(j=0;j<n;j++){
                    if(ma[j]==0){
                        if(st[j]>='a' && st[j]<='z'){
                            st[j]=st[j]-32;
                        }
                    }
                }
                break;
            }
            else if(i==f){
                for(j=0;j<n;j++){
                    if(ma[j]==0){
                        if(st[j]>='A' && st[j]<='Z'){
                            st[j]=st[j]+32;
                        }
                    }
                }
                break;
            }
            ma[ss[i].first-1]=1;
        }
        cout<<st<<endl;
    }

}
