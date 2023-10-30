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
ll i,j,a,k,b,n,t=1,m,p,q,c,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,v,vv;
vector<pair<ll,ll> > ss,pp,rr;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<ll,vector<ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);


int main()
{
    fast;

    for(i=0;i<=30;i++){
            c=1;
        for(j=1;j<=i;j++){
            c = c*2;
        }
        ma[i]=c;
    }

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<m;i++){
            cin>>a;
            s.pb(a);
        }

        f=0;
        for(i=0;i<n;i++){
             b= v[i];
             c=0;
             while(b%2==0){
                c++;
                b = b/2;
             }
             si.insert({c,i});
        }
        for(i=0;i<m;i++){
            b = s[i];
            pair<ll,ll> pai;
            pai={b,-1};
            auto it = si.lower_bound(pai);
            pp.cl;
            ss.cl;
//            cout<<i<<endl;
//            for(auto x:si){
//                cout<<x.first<<" "<<x.second<<endl;
//            }
            while(it!=si.end()){
                a = (*it).first;
                b = (*it).second;
                //cout<<a<<" l "<<b<<endl;
                if(a>0)v[b]+=ma[s[i]-1];
                if(v[b]%2==0)ss.pb({v[b],b});
                pp.pb({a,b});
                it++;
            }
            //cout<<i<<endl;
            for(j=0;j<pp.size();j++){
                si.erase({pp[j].first,pp[j].second});
            }
            for(j=0;j<ss.size();j++){
                 b= ss[j].first;
             c=0;
             while(b%2==0){
                c++;
                b = b/2;
             }
             si.insert({c,ss[j].second});
            }
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        s.cl;
        v.cl;
        si.cl;
    }
}
