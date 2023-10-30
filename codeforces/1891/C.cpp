/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int
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
ll i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,v,vv;
vector<pair<ll,ll> > ss,pp,rr;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll > li,si;
long long int c,d,e,f,g;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        c=0;
        d=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        for(i=0,j=n-1;i<=j;){
                //cout<<d<<endl;
            if(i==j){
                if(c>=v[i])d++;
                else{
                    if(v[i]==1)d++;
        else{
                    e = v[i]-c;
                    f = e/2;
                    if(e%2==1)f++;
                    d = d+f+1;}
                }
        break;
            }
            else if(c+v[i]>=v[j]){
                e = c+v[i]-v[j];
                d = d+v[i]-e+1;
                v[i] = e;
                if(e==0)i++;
                j--;
                c=0;
            }
            else{
                d = d+v[i];
                c = c+v[i];
                i++;
            }
        }
        cout<<d<<endl;
        v.cl;
    }
}
