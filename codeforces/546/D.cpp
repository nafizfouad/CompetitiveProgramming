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

ll ar[5000006], sp[5000006];

void prmf(ll n)
{

    ll i,j;
    for(i=1; i<=n; i++)
    {
        if(i%2==1)sp[i]=i;
        else sp[i] = 2;
    }
    for(i=3; i<=sqrt(n); i=i+2)
    {
        if(sp[i]==i)
        {
            for(j=i*i; j<=n; j+=2*i)
            {
                if(sp[j]==j)
                {
                    sp[j] = i;
                }
            }
        }
    }
}

int main()
{
    fast;
    prmf(5000005);
    ar[0] = 0;
    ar[1] = 1;
    for(i=2;i<=5000000;i++){
        j = i;
         c = 0;
         while(j>1){
            j = j/sp[j];
            c++;
         }
         ar[i] = ar[i-1]+c;
    }
    cin>>t;
    while(t--)
    {
       cin>>n>>m;
       cout<<ar[n]-ar[m]<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
