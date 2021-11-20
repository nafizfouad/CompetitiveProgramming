;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define endl '\n'
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,v,vv;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[10000007],br[10000007];

void sieve()
{

    for(i=1; i<=10000000; i++)
    {
        if(i%2==0)ar[i]=2;
        else ar[i] = i;
    }
    for(i=3; i*i<=10000000; i=i+2)
    {
        if(ar[i]==i)
        {
            for(j=i*i; j<=10000000; j=j+(2*i))
            {
                if(ar[j]==j)ar[j]=i;
            }
        }
    }
    for(i=2; i<=10000000; i++)
    {
        if(ar[i]==i)vv.pb(0),br[i] = vv.size()-1,s.pb(i);
    }

}
void getFactorization(ll x)
{
    ma.clear();
    while (x != 1)
    {
        if(ma[ar[x]]==0){vv[br[ar[x]]]++,ma[ar[x]]=1;}
        l = max(l,ar[x]);
        x = x / ar[x];
    }
    return;
}
int main()
{
    fast;
    //cin>>t;
    sieve();
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        //cout<<"kie"<<endl;
        for(i=0; i<n; i++)
        {
            //cout<<i<<endl;
            getFactorization(v[i]);
        }
        //cout<<l<<endl;
        for(i=1; i<vv.size(); i++)
        {
            vv[i]=vv[i]+vv[i-1];
        }
        //cout<<"kire"<<endl;
        for(i=0; i<m; i++)
        {
            a = ss[i].first;
            b = ss[i].second;
            if(b<s[0])cout<<0<<endl;
           else if(a>l)cout<<0<<endl;
            else if(b>l)
            {
                auto ki = lower_bound(s.begin(),s.end(),a);

                if(ki==s.begin())d = vv[br[l]];
                else {--ki;
                c = (*ki);
                d = vv[br[l]]-vv[br[c]];}
                cout<<d<<endl;
            }
            else
            {
                auto it = lower_bound(s.begin(),s.end(),b);
                if(it==s.end())--it;
                else if((*it)>b)--it;
                d = (*it);
                auto ki = lower_bound(s.begin(),s.end(),a);
                if(ki==s.begin())e = vv[br[d]];
                else {--ki;
                c = (*ki);
                e = vv[br[d]]-vv[br[c]];}
                cout<<e<<endl;
            }
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
