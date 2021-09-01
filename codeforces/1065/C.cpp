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
vector<pair<ll,ll> > v,s,vv,hh;
vector<vector<ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<string, ll >se,me;
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
    while(t--)
    {
        cin>>n>>k;
        p++;
        f = 0;
        for(i=0; i<n; i++)
        {
           cin>>a;
           e = max(e,a);
           ma[a]++;
           f = max(f,ma[a]);
           aq.push(a);
        }
        c = 0;
        d = 0;
        for(i=e;i>=1;i--){
            if(f==n)break;
            a = ma[i];
            d = d+a;
            ma[i] = 0;
            ma[i-1] +=a;
            b = ma[i-1];
            f = max(f,b);
            if(d==k && f<n)d = 0,c++;
            else if(d<k && f<n && d+b>k)c++,d = 0;
            if(f==n){c++;break;}
        }
        cout<<c<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
