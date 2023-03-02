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
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<string> v,s;
vector< pair<ll,ll> > ss,pp,vv,hh;
map<ll,ll > ta,pa,sa,ma;
map< pair<pair<ll,ll>, ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>st;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>et;
            v.pb(et);
        }
        l = -1;
        r = 0;
        o = 0;
        while(r<st.size()){
                //cout<<l<<" "<<r<<endl;
                d = r-1;
            for(i=r;i>l;i--){
                for(j=0;j<n;j++){
                    c = 0;
                    for(k=0,p=i;k<v[j].size();p++,k++){
                        if(st[p]==v[j][k])c++;
                    }
                    if(c==v[j].size()){
                        if(d<p){
                            d = p;
                            x = j;
                            y = i;
                        }
                    }
                }
            }
            if(d==r-1){o=1;break;}
            l = y;
            r = d;
            ss.pb({x,y});
        }
        if(o==0){
            cout<<ss.size()<<endl;
            for(i=0;i<ss.size();i++){
                cout<<ss[i].first+1<<" "<<ss[i].second+1<<endl;
            }
        }
        else cout<<-1<<endl;
        ss.clear();
        v.clear();
    }
}
