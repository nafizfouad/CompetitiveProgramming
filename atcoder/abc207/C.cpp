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
map<ll,char >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b>>c;
            if(a==1){
                    b = b*10;
            c = c*10;
                ss.pb({b,c});
            }
            else if(a==2){
                    b = b*10;
            c = c*10;
                ss.pb({b,c-1});
            }
            else if(a==3){
                b = b*10;
            c = c*10;
                ss.pb({b+1,c});
            }
            else {
                b = b*10;
            c = c*10;
                if(b==c-1)ss.pb({0,0});
                else ss.pb({b+1,c-1});
            }
        }
        for(i=n-1;i>0;i--){
            a = ss[i].first;
            b = ss[i].second;
            if(a==0 && b==0)continue;
            for(j=0;j<i;j++){
                c = ss[j].first;
                d = ss[j].second;
                if((a>=c && a<=d)||(b>=c && b<=d))p++;
                else if((c>=a && c<=b)||(d>=a && d<=b))p++;
            }
        }
        cout<<p<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
