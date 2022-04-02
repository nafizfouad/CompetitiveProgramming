;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,heh;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>k>>m;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        c = 0;
        sort(v.begin(),v.end(),greater<ll>());
        for(i=0;i<n;i++){

            b = v[i]/m;
            d = m-(v[i]%m);
            b = min(k,b);
            v[i] = v[i]-(b*m);
            k = k-b;
           if(d!=m) ss.pb({d,v[i]});
           else ss.pb({1e12,v[i]});
            if(k==0){
                for(j=i+1;j<n;j++){
                    ss.pb({1e12,v[j]});
                }
                break;
            }
        }
        sort(ss.begin(),ss.end());
        //for(i=0;i<n;i++)cout<<ss[i].first<<" "<<ss[i].second<<" "<<k<<endl;
        j=0;
        while(k){
            k--;
            ss[j].second = 0;
            j++;
            if(j==n)break;
        }
        for(i=0;i<n;i++)c=c+ss[i].second;
        cout<<c<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
