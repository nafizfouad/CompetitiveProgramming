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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<pair<ll,ll>,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            m =m+a;
            ss.pb({b,a});
        }
        sort(ss.begin(),ss.end());
        for(i=0;i<n;i++){
           pq.push({{ss[i].first,ss[i].second},i});
        }
        c = 0;
        d = 0;
        for(i=0;i<n;i++){
                //cout<<ss[i].first<<" "<<ss[i].second<<" "<<d<<endl;
            if(ss[i].second>0){
                if(ss[i].first<=c){
                    c = c+ss[i].second;
                    d = d+ss[i].second;
                }
                else{
                    while(pq.size()>0 && c<ss[i].first){
                        a = pq.top().first.first;
                        b = pq.top().first.second;
                        e = pq.top().second;
                        pq.pop();
                        if(c+b<=ss[i].first){
                            c = c+b;
                            d = d+(2*b);
                            ss[e].second=0;
                        }
                        else{
                            d =  d+(2*(ss[i].first-c));
                            b = b-(ss[i].first-c);
                            ss[e].second-=ss[i].first-c;
                            pq.push({{a,b},e});
                            c = ss[i].first;
                        }
                        if(c>=m)break;
                    }
                    if(c>=m)break;
                    if(c>=ss[i].first)d = d+ss[i].second;
                    else d = d+(2*ss[i].second);
                    c = c+ss[i].second;
                }
            }
            //cout<<d<<endl;
        }
        cout<<d<<endl;
        while(pq.size())pq.pop();
        ss.clear();
    }

}
