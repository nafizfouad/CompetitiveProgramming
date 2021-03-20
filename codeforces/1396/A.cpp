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
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s;
vector<pair<ll,ll> > vv,ss;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll> me,he,mem;
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
        for(i=0;i<n;i++){
         cin>>a;
         v.pb(a);
        }
        if(n==1){
            cout<<1<<" "<<1<<endl;
            cout<<-v[0]<<endl;cout<<1<<" "<<1<<endl;
            cout<<0<<endl;cout<<1<<" "<<1<<endl;
            cout<<0<<endl;
        }
        else{
            cout<<1<<" "<<1<<endl;
            cout<<-v[0]<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<0<<" ";
            for(i=1;i<n;i++)cout<<(-n)*v[i]<<" ";
            cout<<endl;
            cout<<2<<" "<<n<<endl;
            for(i=1;i<n;i++)cout<<(n-1)*v[i]<<" ";
            cout<<endl;
        }
        v.clear();
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
