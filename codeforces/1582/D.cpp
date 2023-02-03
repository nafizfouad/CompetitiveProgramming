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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
multiset<pair<ll,ll> >si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {

        cin>>n;

        c = 0;
        d = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            ss.pb({a,i});
            if(a>0)c++;
            else d++;
        }
        ll ar[n+2];
        sort(ss.begin(),ss.end());
        for(i=0; i<n; i=i+2)
        {
            ar[i] = v[i+1];
            ar[i+1] = -v[i];
        }

        if(n%2==1)
        {
            if(c>=2)
            {
                a = ss[n-1].first;
                b = ss[n-1].second; ///bi
                d = ss[n-2].first;
                e = ss[n-2].second; ///bj

                l = ss[0].first;
                r = ss[0].second;

                ar[b] = -l;
                ar[e] = -l;
                ar[r] = a+d;
                ma[b]=1,ma[e]=1,ma[r]=1;
                ///cout<<b<<" "<<e<<" "<<r<<endl;
            }
            else
            {
                a = ss[0].first;
                b = ss[0].second; ///bi
                d = ss[1].first;
                e = ss[1].second; ///bj

                l = ss[n-1].first;
                r = ss[n-1].second;

                ar[b] = -l;
                ar[e] = -l;
                ar[r] = a+d;
                ma[b]=1,ma[e]=1,ma[r]=1;
            }
            for(i=0; i<n; i++)
            {
                if(ma[i]==0)s.pb(i);
            }
            for(i=0; i<s.size(); i=i+2)
            {
                a = s[i];
                b = s[i+1];
                c = v[a];
                d = v[b];
                ar[a] = d;
                ar[b] = -c;
            }
        }
        for(i=0; i<n; i++)cout<<ar[i]<<" ";
        cout<<endl;
        v.clear();
        s.clear();
        ss.clear();
        ma.clear();
    }
}
