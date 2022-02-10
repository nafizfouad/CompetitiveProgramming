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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v[200005];
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>st;
        ll ar[n+2];
        d = 0;
        c = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='0'){
                if(li.size()==0){

                    c++;
                    si.insert(c);
                    ar[i] = c;
                    d = max(d,ar[i]);
                }
                else{
                    auto it = li.begin();
                    ar[i] = (*it);
                    d = max(d,ar[i]);
                    si.insert((*it));
                    li.erase(it);
                }
            }
            else{
                if(si.size()==0){

                    c++;
                    li.insert(c);
                    ar[i] = c;
                    d = max(d,ar[i]);
                }
                else{
                    auto it = si.begin();
                    ar[i] = (*it);
                    d = max(d,ar[i]);
                    li.insert((*it));
                    si.erase(it);
                }
            }
        }
        si.clear();
        li.clear();
        cout<<d<<endl;
        for(i=0;i<n;i++)cout<<ar[i]<<" ";
        cout<<endl;
    }
}
