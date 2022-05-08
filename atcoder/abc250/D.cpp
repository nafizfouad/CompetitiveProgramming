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

ll ar[793710];

void sieve()
{

    for(i=4; i<=793700; i=i+2)
    {
        ar[i]=1;
    }
    for(i=3; i*i<=793700; i=i+2)
    {
        if(ar[i]==0)
        {
            for(j=i*i; j<=793700; j=j+(2*i))
            {
                ar[j] = 1;
            }
        }
    }
    for(i=2; i<=793700; i++)
    {
        if(ar[i]==0)v.pb(i);
    }

}


int main()
{
    fast;
    //cin>>t;
    sieve();
    p = 0;
    while(t--)
    {
        cin>>n;
        m = v.size();
        j = m-1;
        for(i=0;i<m;i++){
                if(j<=i)break;
            a = v[i]*v[j]*v[j]*v[j];
            //if(v[j]==5)cout<<i<<" "<<j<<endl;
            if(a>n){
                j--;
                i--;
            }
            else{
                d = d+(j-i);
            }
        }
        cout<<d<<endl;
    }

}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
