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
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[200005];
vector<string > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        ll ar[n+2][m+2];
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                cin>>ar[i][j];
            }
        }
        f = 0;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                a = ar[i][j];
                if(i!=n && j!=m){
                    for(k=i+1;k<=n;k++){
                        for(l=j+1;l<=m;l++){
                            b = a+ar[k][l];
                            d = ar[k][j]+ar[i][l];
                            if(b>d)f=1;
                        }
                    }
                }
            }
        }
        if(f==1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
