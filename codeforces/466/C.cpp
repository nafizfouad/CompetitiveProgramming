;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv,hh;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
ll ar[500006],br[500006];
int main()
{
    fast;
    // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            c = c+a;
        }
        if(c%3!=0)
        {
            cout<<0<<endl;
            continue;
        }
        c = c/3;
        for(i=n-1; i>=0; i--)
        {
            d = d+v[i];
            if(d==c)ar[i]=1;
        }
        for(i=n-2; i>=0; i--)
        {
            ar[i] = ar[i]+ar[i+1];
        }
        d = 0;
        for(i=0; i+2<n; i++)
        {
            d = d+v[i];
            if(d==c)f+=ar[i+2];
        }
        cout<<f<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
