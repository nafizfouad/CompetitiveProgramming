;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
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
//vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
//map<pair<ll,ll>, ll >se,me;
//priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
//deque<ll> de,ne;
//set<ll> li,si;

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
        for(i=0;i<n;i++){
            cin>>a;
            ma[a]++;
        }
        for(i=0;i<n;i++){
            cin>>a;
            s.pb(a);
        }
        for(i=0;i<n;i++){
            cin>>a;
            b = s[a-1];
            d = d+ma[b];
        }
        cout<<d<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
