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
vector<pair<ll,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;
        a=0;
        b=0;
        for(i=0; i<n; i++)
        {
            cin>>e;
            a =a +e;
            si.insert(e);
        }
        for(i=0; i<m; i++)
        {
            cin>>e;b=b+e;
            li.insert(e);
        }
        auto it = si.begin();
        auto ki = li.rbegin();
        if(k%2==1){
            if((*it)<(*ki)){
                cout<<a-(*it)+(*ki)<<endl;
            }
            else cout<<a<<endl;
        }
        else if(k%2==0){

            if((*it)<(*ki)){
                a = a-(*it)+(*ki);
                si.insert((*ki));
                si.erase(si.find((*it)));

                li.erase(li.find(*ki));
                li.insert((*it));
            }
            auto itt = li.begin();
            auto kii= si.rbegin();
            if((*itt)<(*kii)){
                a = a-(*kii)+(*itt);
            }
            cout<<a<<endl;
        }
        si.cl;
        li.cl;
    }
}


