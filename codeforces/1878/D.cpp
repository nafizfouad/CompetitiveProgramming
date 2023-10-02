/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int
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
vector<pair<ll,pair<ll,ll> > > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[200005];

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        cin>>st;
        for(i=0; i<k; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<k; i++)
        {
            cin>>a;
            s.pb(a);
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a;
            vv.pb(a);
        }
        for(i=0; i<=n; i++)ar[i]=0;
        for(i=0; i<m; i++)
        {
            auto it = lower_bound(s.begin(),s.end(),vv[i]);

            a = it-s.begin();
            if(vv[i]<v[a])
            {
                --it;
            }
            a = it-s.begin();
            l = min(vv[i],s[a]+v[a]-vv[i]);
            r = max(vv[i],s[a]+v[a]-vv[i]);
            l--,r--;
          //  cout<<l<<" "<<r<<endl;
            ar[l]++;
            ar[r+1]--;
            if(ma[l]==0){
            ss.pb({l,{r-l+1,r}});
            }
            else ma[l]=1;
        }
        for(i=1; i<=n; i++)ar[i]+=ar[i-1];
        sort(ss.begin(),ss.end());
        for(i=0;i<ss.size();i++)
        {
            a = ss[i].second.first;
            if(i+1<ss.size())b=ss[i+1].first-ss[i].first;
            else b=1e18;
            k=min(a,b);
            l=ss[i].first;
            r=ss[i].second.second;
            for(j=1;j<=k;j++){
                me[l]={a,ss[i].first};
                me[r]={a,ss[i].first};
                l++,r--;
            }
        }

        et.cl;
        for(i=0; i<n; i++)
        {
            //cout<<ar[i]<<endl;
            if(ar[i]%2==1)
            {
                a = me[i].first;

                b = i-me[i].second+1;
               // cout<<a<<" "<<b<<" "<<i<<" "<<me[i].second<<endl;
                if(a==1)et.pb(st[i]);
                else if(b>a/2)
                {
                    c = b-(a/2);
                    if(a%2==0)
                    {
                        c = (c*2)-1;
                        et.pb(st[i-c]);
                    }
                    else if(c==1)et.pb(st[i]);
                    else {
                        d = a-b;
                        et.pb(st[me[i].second+d]);
                    }
                }
                else
                {
                    c = (a/2)-b;
                    if(a%2==0)c = (c*2)+1;
                    else c++,c=c*2;
                    et.pb(st[i+c]);
                }

            }
            else et.pb(st[i]);
        }
        cout<<et<<endl;
        v.cl;
        s.cl;
        vv.cl;
        ma.cl;
        me.cl;
        ss.cl;
    }
}
