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
set<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<9; i++)
        {
            cin>>a;
            ma[a] = i+1;
            sa[i+1] = a;
        }
        auto it =ma.begin();
        a =(*it).first;
        b = (*it).second;
        c = n/a;
        if(c==0)cout<<-1<<endl;
        else if(n%a==0){
            for(i=0;i<c;i++)cout<<b;
            cout<<endl;
        }
        else{
            for(i=0;i<c;i++){
                de.pb(b);
                n = n-a;
            }
            j = -1;
            while(1){
                j++;
                if(j==c)break;
                e = -1e18;
                for(auto it = ma.begin();it!=ma.end();it++){
                    if((*it).first<=n+a){
                        e = max(e,(*it).second);
                    }
                }
                de[j] = e;
                n = (n+a)-sa[e];

            }
            for(i=0;i<c;i++){
                cout<<de[i];
            }
            cout<<endl;
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

