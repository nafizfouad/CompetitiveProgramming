#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<pair<string,ll> > s,hh,vv,v;
vector<pair<ll,ll> > pp,ss;
map<ll,ll > ta,pa,sa,ma;
map<ll,priority_queue<ll,vector<ll>,greater<ll> > >se,me;
priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>st;
            if(st[0]=='i')cin>>a,ss.pb({a,0});
            else if(st[0]=='g')cin>>a,ss.pb({a,1});
            else ss.pb({a,2});
        }

        for(i=0; i<n; i++)
        {
            a = ss[i].second;
            b = ss[i].first;
            //cout<<'l'<<endl;
            if(a==0)
            {
                pq.push(b);
                v.pb({"insert",b});
            }
            else if(a==1)
            {
                if(pq.size()>0)
                {
                    while(pq.top()<b)
                    {
                        pq.pop();

                        v.pb({"removeMin",1e18});
                        if(pq.size()==0)break;
                    }
                    if(pq.size()==0){
                        v.pb({"insert",b}),v.pb({"getMin",b}),pq.push(b);
                    }
                    else if(pq.top()!=b){
                        v.pb({"insert",b}),v.pb({"getMin",b}),pq.push(b);
                    }
                    else v.pb({"getMin",b});
                }
                else v.pb({"insert",b}),v.pb({"getMin",b}),pq.push(b);
            }
            else
            {
                if(pq.size()>0)v.pb({"removeMin",1e18}),pq.pop();
                else v.pb({"insert",1}),v.pb({"removeMin",1e18});
            }
        }
        //cout<<'ll'<<endl;
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++){
            if(v[i].second==1e18)cout<<v[i].first<<endl;
            else cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }

}
