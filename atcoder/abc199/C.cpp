;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<deque>
#include<set>
#include<queue>
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
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
   // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        cin>>st;
        for(i=0;i<n;i++)et.pb(st[i]);
        for(i=n;i<2*n;i++)ft.pb(st[i]);
        cin>>m;
        for(i=0;i<m;i++){
            cin>>a>>b>>c;
            if(a==1){
                if(c<=n)swap(et[b-1],et[c-1]);
                else if(b>n){
                    d = b-n-1;
                    e = c-n-1;
                    swap(ft[d],ft[e]);
                }
                else{
                    d = c-n-1;
                    swap(et[b-1],ft[d]);
                }
            }
            else{
                swap(et,ft);
            }
        }
        cout<<et<<ft<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
