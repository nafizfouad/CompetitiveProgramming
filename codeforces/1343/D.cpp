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
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,vv,hh,v;
vector< pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll ar[k*2+5];
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        memset(ar,0,sizeof ar);
        for(i=0,j=n-1;i<j;i++,j--){
            a = v[i];
            b = v[j];
            s.pb(min(a,b));
            vv.pb(max(a,b));
            ar[a+b]++;
        }
        g = 1e18;
        sort(s.begin(),s.end());
        sort(vv.begin(),vv.end());
        for(i=2;i<=k;i++){
            auto it = lower_bound(s.begin(),s.end(),i);
            d = distance(s.begin(),it);
            e = n/2-d;
            c = e*2;
            f = d-ar[i];
            c = c+f;
            g = min(g,c);
        }
        for(i=k+1;i<=2*k;i++){
            e = i-k-1;
            auto it = upper_bound(vv.begin(),vv.end(),e);
            c = 0;
            if(it!=vv.begin()){
                    --it;
                f = distance(vv.begin(),it);
                c = c+((f+1)*2);
                x = n/2-f-1;
                p = x-ar[i];
                c = c+p;
            }
            else c = n/2-ar[i];
            g = min(g,c);
        }
        cout<<g<<endl;
        s.clear();
        v.clear();
        vv.clear();
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
