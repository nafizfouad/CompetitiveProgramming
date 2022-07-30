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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv;
vector<pair<ll,ll> > ss,pp,hh;
map<ll,ll > ta,pa,sa,ma;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<string> de,ne;
multiset<ll > si,li;
newset mi;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

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
            if(i<=2)si.insert(a);
        }
        if(n<=3)cout<<"no"<<endl;
        else
        {
            for(i=2;i+1<n;i++){
                 c = v[i+1];
                auto ki = si.rbegin();
                d = (*ki);
                auto kii = si.begin();
                e = (*kii);
                 auto it= si.find(v[i]);
                 if(it==si.begin()){
                        ++it;
                    if(c<v[i])si.insert(c);
                    else if(c>d)si.insert(c);
                    else if(c<(*it))si.insert(c);
                    else {f=1;break;}
                 }
                else if(v[i]==d){
                        --it;
                    if(c>v[i])si.insert(c);
                    else if(c<e)si.insert(c);
                    else if(c>(*it))si.insert(c);
                    else {f=1;break;}
                 }
                 else{
                    --it;
                    l = (*it);
                    ++it;
                    ++it;
                    r = (*it);
                    if(c>l && c<v[i])si.insert(c);
                    else if(c<r && c>v[i])si.insert(c);
                    else {f=1;break;}
                 }
            }
            if(f==0)cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
    }
}
