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
vector<ll> v,s,vv,hh;
vector<vector<ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<string, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll>li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[100006];

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0;; i++)
        {
            a = pow(2,i);
            b = n/a;
            if(b==1 && n%a!=0){
                a = a/2;
                c = n/a;
                c = a*c;
                cout<<c<<endl;
                break;
            }
            else if(b==1){
                cout<<a<<endl;
                break;
            }
            else{
                c = b/2;
                if(b%2==1)c++;
                for(j=1;j<=c;j++)cout<<a<<" ";
            }
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
