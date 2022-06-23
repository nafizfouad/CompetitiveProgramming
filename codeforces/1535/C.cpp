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
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,vv,s;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,vector<ll> >se,me;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >, greater<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>st;
        n = st.size();
        c = 0;
        d = 0;
        for(i=0; i+1<n; i++)
        {
            char ch=st[i];
            e = 1;
            f = i;
            if(st[i]==st[i+1])
            {
                while(st[i]==st[i+1])
                {
                    e++;
                    if(st[i]=='0' || st[i]=='1')
                    {
                        si.insert(i);

                    }

                    i++;
                    if(i==n-1)break;
                }
            }

            if(ch=='0')c=1,d=0;
            else if(ch=='1')d=1,c=0;
            else
            {
                for(j=f; j<=i; j++)ma[j] = i;
                if(i+1<n)
                {
                    if(c==1)
                    {
                        if(st[i+1]=='1' && e%2==1)si.insert(i);
                        else if(st[i+1]=='0' && e%2==0)si.insert(i);
                    }
                    else if(d==1)
                    {
                        if(st[i+1]=='1' && e%2==0)si.insert(i);
                        else if(st[i+1]=='0' && e%2==1)si.insert(i);
                    }
                }
                c = 0;
                d = 0;
            }
        }
//        for(auto it = si.begin();it!=si.end();it++){
//            cout<<(*it)<<endl;
//        }
        if(si.size()==0)cout<<(n*(n+1))/2<<endl;
        else
        {
            d = 0;
            for(i=0; i<n; i++)
            {
                auto it = si.lower_bound(i);
                if(st[i]=='?' && ma[i]==(*it))++it;
                if(it==si.end())
                {
                    c = n-i;
                }
                else c = (*it)-i+1;
                d = d+c;
            }
            cout<<d<<endl;
        }
        si.clear();
        ma.clear();
    }
}
