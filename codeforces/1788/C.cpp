#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,pair<ll,ll> > ta,pa,sa,ma;
map<ll,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n%2==0)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=1; i<=2*n; i++)
            {
                si.insert(i);
            }
            b = 2*n+1;
            l = 2*n;
            r = n/2+1;
            while(r)
            {
                c = b-l;
                if(c==l)break;
                auto it = si.find(c);
                if(it!=si.end())
                {
                    si.erase(l);
                    si.erase(c);
                    ss.pb({c,l});
                    l--;
                    b++;

                }
                else break;
                r--;
            }
            c =  si.size()/2;
            d = 0;
            //cout<<c<<" l "<<si.size()<<endl;
            for(auto it = si.begin(); it!=si.end(); it++)
            {
                if(d<c)s.pb((*it));
                else v.pb((*it));
                d++;
            }
            for(i=0,j=v.size()-1; i<s.size(); i++,j--)
            {
                ss.pb({s[i],v[j]});
            }
            for(i=0; i<n; i++)
            {
                cout<<ss[i].first<<" "<<ss[i].second<<endl;
            }
        }
        ss.clear();
        v.clear();
        s.clear();
        si.clear();
    }
}
