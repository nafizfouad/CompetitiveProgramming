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
vector<ll > s,v,vv[100006];
vector<pair<char,string> > ss,pp,hh;
map<string,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<pair<ll,ll> > si,li;
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
        d = 0;
        for(i=0; i<n; i++)
        {
            char ch;
            cin>>ch>>st;
            ss.pb({ch,st});
        }
        d = 0;
        for(i=0; i<n; i++)
        {
            if(ss[i].first=='+' || ss[i].first=='-')
            {
                et.clear();
                for(j=ss[i].second.size()-1; j>=0; j--)
                {
                    a = ss[i].second[j]-'0';
                    if(a%2==0)
                    {
                        et.pb('0');
                    }
                    else et.pb('1');
                }
                while(et.size()<18)et.pb('0');
                reverse(et.begin(),et.end());
                //cout<<et<<endl;
                if(ss[i].first=='+')
                {
                    ma[et]++;
                }
                else ma[et]--;
            }
            else if(ss[i].first=='?')
            {
                reverse(ss[i].second.begin(),ss[i].second.end());
                while(ss[i].second.size()<18)ss[i].second.pb('0');
                reverse(ss[i].second.begin(),ss[i].second.end());
                cout<<ma[ss[i].second]<<endl;
            }

        }

    }
}
