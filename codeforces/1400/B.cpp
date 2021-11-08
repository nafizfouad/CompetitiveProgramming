;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>newset;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,vv,v,hh;
vector<pair<ll,pair<ll,ll> > > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<string, ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll dp[100002][102];

ll mem(ll i,ll j)
{


    if(i==n-1)return 1;
    if(dp[i][j]!=-1)return dp[i][j]%1000000007;

    ll c=0,d,e,f;

    if(s[i+1]==0)
    {
        if(j-1>0)d = mem(i+1,j-1)%1000000007;
        else d = 0;
        e = mem(i+1,j)%1000000007;
        if(j+1<=m)f = mem(i+1,j+1)%1000000007;
        else f=0;
        c = (d+e+f)%1000000007;
    }
    else
    {
        if(abs(j-v[i+1])<=1)d = mem(i+1,v[i+1])%1000000007;
        else d=0;
        c = d;
    }
    return dp[i][j] = c%1000000007;

}

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>l>>r;
        cin>>c>>d;
        u = -1e18;

        ss.clear();
        a = n/c;
        a = min(a,l);
        for(i=a;i>=0;i--){
            b = i*c;
            e = n-b;
            f = e/d;
            f = min(f,r);
            g = f*d;
            x = n-(b+g);
            ss.pb({x,{i,f}});
        }
        for(i=0;i<ss.size();i++){
            b = l-ss[i].second.first;
            e = r-ss[i].second.second;
            if(c<d){
                f = m/c;
                f = min(f,b);
                g = m-(f*c);
                p = g/d;
                p = min(p,e);
                u = max(u,ss[i].second.first+ss[i].second.second+f+p);
            }
            else{
                f = m/d;
                f = min(f,e);
                g = m-(f*d);
                p = g/c;
                p = min(p,b);
                u = max(u,ss[i].second.first+ss[i].second.second+f+p);
            }
        }

        ss.clear();
        a = n/d;
        a = min(a,r);
        for(i=a;i>=0;i--){
            b = i*d;
            e = n-b;
            f = e/c;
            f = min(f,l);
            g = f*c;
            x = n-(b+g);
            ss.pb({x,{f,i}});
        }
        for(i=0;i<ss.size();i++){
            b = l-ss[i].second.first;
            e = r-ss[i].second.second;
            if(c<d){
                f = m/c;
                f = min(f,b);
                g = m-(f*c);
                p = g/d;
                p = min(p,e);
                u = max(u,ss[i].second.first+ss[i].second.second+f+p);
            }
            else{
                f = m/d;
                f = min(f,e);
                g = m-(f*d);
                p = g/c;
                p = min(p,b);
                u = max(u,ss[i].second.first+ss[i].second.second+f+p);
            }
        }
        cout<<u<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
