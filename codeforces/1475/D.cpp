/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
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
ll i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv,rr,hh,pp;
vector<pair<ll,ll> > ss;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        s.cl;
        v.cl;
        vv.cl;
        ss.cl;
        x=0;
        for(i=0;i<n;i++){
            cin>>a;
            x=x+a;
            v.pb(a);
            ss.pb({a,0});
        }
        d=0;

        for(i=0;i<n;i++){
            cin>>a;

            if(a==1)s.pb(v[i]);
            else vv.pb(v[i]),d=d+v[i];
            ss[i].second=a;
        }
       
        c=0;
        if(s.size()==0){
                  sort(vv.begin(),vv.end(),greater<ll>());
            for(i=0;i<n;i++){
                c=c+vv[i];
                if(c>=m)break;
            }
            if(c<m)cout<<-1<<endl;
            else cout<<(i+1)*2<<endl;
            con;
        }
        if(vv.size()==0){
                  sort(s.begin(),s.end(),greater<ll>());
            for(i=0;i<n;i++){
                c=c+s[i];
                if(c>=m)break;
            }
            if(c<m)cout<<-1<<endl;
            else cout<<i+1<<endl;
            con;
        }
        sort(s.begin(),s.end(),greater<ll>());
        sort(vv.begin(),vv.end(),greater<ll>());
        c=0;
        j=vv.size()-1;
        e=1e18;
        for(i=0;i<s.size();i++){
            c=c+s[i];
            if(c>=m){
                e = min(e,i+1);
            }
            else{
                for(l=j;l>=0;l--){
                    d = d-vv[l];
                    if(c+d>=m)con;
                    else {d=d+vv[l];break;}
                }
                j=l;
                if(c+d>=m)e =  min(e,i+1+(l+1)*2);
            }
        }
        c=0;
        for(i=0;i<vv.size();i++){
            c=c+vv[i];
            if(c>=m){e=min(e,(i+1)*2);break;}
        }
        if(x<m)cout<<-1<<endl;
       else cout<<e<<endl;
        s.cl;
        vv.cl;
        v.cl;
    }
}
