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
vector<pair<pair<ll,ll>,ll> > ss,pp;
vector<vector<ll> > ii;
map<char,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<char> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);


int main() {

    fast;

    cin>>t;

    while(t--) {
        cin>>a>>b;
        cin>>c>>d;
        cin>>e>>f;
        aa = sqrtl(((a-c)*(a-c))+((b-d)*(b-d)));
        bb = sqrtl(((a-e)*(a-e))+((b-f)*(b-f)));
        cc = (sqrtl((c-e)*(c-e)+(d-f)*(d-f)))/2.0;
        gg = sqrtl(c*c+d*d);
        kk = sqrtl(e*e+f*f);
        dd = 0.0;
        ee = 1e9;
        for(i=1;i<=500;i++){
            ff = (dd+ee)/2.0;
            if(ff>=cc){
                if(aa<=ff && kk<=ff){
                    ee = ff;
                }
                else if(bb<=ff && gg<=ff){
                    ee = ff;
                }
                else dd=ff;
            }
            else dd = ff;
            if(dd>=ee)break;
        }
        aa = max(aa,gg);
        bb = max(bb,kk);
        cout<<fixed<<setprecision(10)<<min(min(aa,bb),ee)<<endl;
    }
}
