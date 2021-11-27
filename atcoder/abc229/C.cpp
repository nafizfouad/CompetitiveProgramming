;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<list>
#include<iterator>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[100005],hh;
vector<pair<ll,ll> > ss,pp,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
ll ar[1048600];
int main()
{
    fast;
    // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>a>>b;
            ss.pb({a,b});
        }
        sort(ss.begin(),ss.end());
        for(i=n-1;i>=0;i--){
            if(m>ss[i].second){
                c = c+(ss[i].first*ss[i].second);
                m= m-ss[i].second;
            }
            else {c = c+(ss[i].first*m);break;}
        }
        cout<<c<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
