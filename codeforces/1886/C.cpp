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
        cin>>st;
        cin>>n;

        k = st.size();
        l = (k*(k+1))/2;
        bb = ((l-n)*1.0);
        aa = sqrtl(1.0+(4.0*2.0*bb));
        aa = aa-1.0;
        if(aa<0.0)aa=0.0;
        aa = aa/2.0;
        a = aa;
        d = (a*(a+1))/2;
        a = (st.size())-a;
        //cout<<a<<endl;
        c=0;
        for(i=0; i<st.size(); i++) {

            li.insert(st[i]);
            auto it = li.rbegin();
            if((*it)!=st[i] && c+1<a) {
                while((*it)!=st[i] && c+1<a) {
                    c++;
                    //cout<<(*it)<<endl;
                    ma[(*it)]++;
                    li.erase(li.find((*it)));
                    it = li.rbegin();
                }

            }

        }
        while(c+1<a) {
            auto it = li.rbegin();
            c++;
           // cout<<(*it)<<endl;
            ma[(*it)]++;
            li.erase(li.find((*it)));
        }
        et.cl;
        for(i=0; i<st.size(); i++) {
            if(ma[st[i]]>0) {
                ma[st[i]]--;
            } else et.pb(st[i]);
        }
        //cout<<et<<endl;

        e = l-d;
        e = e-n;
        reverse(et.begin(),et.end());
        cout<<et[e];
        ma.cl;
        et.cl;
        li.cl;
    }
}
