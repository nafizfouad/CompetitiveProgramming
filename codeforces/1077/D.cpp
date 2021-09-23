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
vector<ll> s,vv,hh;
vector< pair<ll,ll> > ss,pp,v;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a;
            ma[a]++;
        }
        for(auto it = ma.begin();it!=ma.end();it++){
            v.pb({(*it).second,(*it).first});
        }
        l = 1;
        r = n/k;
        d = -1e18;
        sort(v.begin(),v.end());
        while(l<=r){
            m = (l+r)/2;
          //  cout<<l<<" "<<r<<endl;
            c = 0;
            for(i=v.size()-1;i>=0;i--){
                b = v[i].first/m;
              //  cout<<v[i].first<<" "<<v[i].second<<" "<<m<<" "<<b<<endl;
                c = c+b;
                if(c>=k)break;
                if(b==0)break;
            }
            //cout<<c<<endl;
            if(c>=k)l=m+1,d = max(d,m);
            else r = m-1;
            //cout<<l<<" "<<r<<endl;
        }
        c = 0;
      //  cout<<d<<endl;
        for(i=v.size()-1;i>=0;i--){
            b = v[i].first/d;
            c = c+b;
           if(c<k) for(j=1;j<=b;j++)cout<<v[i].second<<" ";
           else {
            c = c-b;
            e = k-c;
            for(j=1;j<=e;j++)cout<<v[i].second<<" ";
            cout<<endl;
            break;
           }
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

