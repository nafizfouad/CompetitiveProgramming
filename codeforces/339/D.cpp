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

ll ar[262148];

int main()
{
    fast;
    //cin>>t;
    //cout<<(4^6)<<endl;
    while(t--)
    {
        cin>>n>>m;
        c = pow(2,n);
        for(i=0; i<c; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<m; i++)
        {

           cin>>a>>b; ss.pb({a,b});
        }
        k = 0;
        f = 0;
        d = c/2;
        for(i=c*2-1,j=c-1; i>1; j=j-2,i=i-2)
        {
            if(j>=0)
            {
                a = v[j];
                b = v[j-1];
                ar[i] = a;
                ar[i-1] = b;
            }
            else a = ar[i],b=ar[i-1];
            x = i/2;
            if(f%2==1)ar[x] = a^b;
            else ar[x] = (a|b);
            k++;
            if(k==d)d=d/2,f++,k=0;
        }
        for(i=0;i<m;i++){
            a = ss[i].first+c-1;
            b = ss[i].second;
            ar[a] = b;
            f=0;
            while(a!=1){

                if(a%2==0){
                    l=a+1;
                }
                else l = a-1;

                r = a/2;
                if(f==1)ar[r] = (ar[l]^ar[a]),f=0;
                else ar[r] = (ar[l]|ar[a]),f=1;
                // if(i==0)cout<<l<<" "<<a<<" "<<r<<" "<<ar[r]<<endl;
                a = r;
            }
            cout<<ar[1]<<endl;
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

