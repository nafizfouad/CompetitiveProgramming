/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 1000000007
#define cl clear()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,vv,v;
vector<pair<ll,ll> > ss,oo,uu,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<string,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll>si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

ll ar[20];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        cin>>st;
        for(i=0;i<n;i++){
            if(st[i]=='M'){
                if(v[i]==0)ar[1]++;
                else if(v[i]==1)ar[2]++;
                else ar[3]++;
            }
            else if(st[i]=='E'){
                if(v[i]==0){
                    ar[4]=ar[4]+ar[1];
                    ar[5]=ar[5]+ar[2];
                    ar[6]=ar[6]+ar[3];
                }
                else if(v[i]==1){
                    ar[7]=ar[7]+ar[1];
                    ar[8]=ar[8]+ar[2];
                    ar[9]=ar[9]+ar[3];
                }
                else if(v[i]==2){
                    ar[10]=ar[10]+ar[1];
                    ar[11]=ar[11]+ar[2];
                    ar[12]=ar[12]+ar[3];
                }
            }
            else if(st[i]=='X'){
                if(v[i]==0){
                    e = e+(ar[4]+ar[6]+ar[10]+ar[12]);
                    e = e+((ar[5]+ar[7]+ar[8])*2);
                    e = e+((ar[11]+ar[9])*3);
                }
                else if(v[i]==1){
                    e = e+((ar[5]+ar[7]+ar[4])*2);
                    e = e+((ar[10]+ar[6])*3);
                }
                else if(v[i]==2){
                    e = e+(ar[10]+ar[6]+ar[4]);
                    e = e+((ar[5]+ar[7])*3);
                }
            }
        }
        cout<<e<<endl;
    }

}
