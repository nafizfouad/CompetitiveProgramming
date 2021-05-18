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
vector<ll> v[200005],s,vv,hh;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>k;
        if(n<k){cout<<n<<endl;break;}
        b = n-k;
        aa = (-1.0+sqrt((4*1.0*b*2.0)+1.0))/2.0;
        c = aa;
        c = c+k;
        if(fmod(aa,2.0)==0.0 || fmod(aa,2.0)==1.0){}
        else c++;
        cout<<c<<endl;
    }
    /// m minus kore root ber korte hobe then m er sathe sums
    //100 4
//    4 th = 96 + 4 - 4 = 91
//    5 th = 96 + 4 - 5 = 90
//    6 th = 95 + 4 - 6 = 88
//    7 th = 93 + 4 - 7 = 85
//    8 th = 90 + 4 - 8 = 81
//    9 th = 86 + 4 - 9 = 76
//                        70 - 10
//                        63 - 11
//                        55 - 12
//                        46- 13
//                        36 - 14
//                        25 - 15
//                        13 - 16
//                        0  - 17
//                        0 - 18

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;