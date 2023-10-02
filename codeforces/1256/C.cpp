/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 998244353
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
vector<pair<ll,pair<ll,ll> > > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[10000002];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m>>d;
        for(i=0;i<m;i++){
            cin>>a;
            v.pb(a);
        }
        l=0;
        for(i=0;i<m;i++){
            k = l+d;
            for(j=k,r=1;r<=v[i];r++,j++){
                    //if(j>50000)x=1;
                ar[j]=i+1;
                l=j;
            }
        }
        for(i=1;i<=10000000;i++){
            if(ar[i]>0)p=1;
            if(p==1)de.pb(ar[i]);
        }
        for(i=de.size()-1;i>=0;i--){
            if(de[i]>0)break;
            e++;
        }
        while(e>=d && de.size())de.pop_back(),e--;

        while(de.size()<n)de.push_front(0);
        if(de.size()>n){
                a = de.size()-n;
            for(i=0;i<de.size();i++){
                if(de[i]==0 && a>0)a--;
                else ne.pb(de[i]);
            }
        }
        else ne=de;
       // if(ne.size()<n)x=2;
       // if(x==1 || x==2){cout<<x<<endl;break;}
        l=-1;
        for(i=0;i<n;i++){
            if(ne[i]>0){
                if(i-l>d)f=1;
                while(ne[i]>0){
                    i++;
                    if(i==n)break;
                }
                i--;
                l=i;
            }
        }
        if(n-l>d)f=1;
        if(f==0){cout<<"YES"<<endl;for(i=0;i<n;i++)cout<<ne[i]<<" ";cout<<endl;}
        else cout<<"NO"<<endl;
    }
}
