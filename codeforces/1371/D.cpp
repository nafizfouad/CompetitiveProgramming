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

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s;
vector<pair<ll,ll> > vv,ss,pp;
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
    cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        b = m/n;
        c = m%n;
        for(i=1;i<=c;i++)v.pb(b+1);
        for(i=c+1;i<=n;i++)v.pb(b);
        c = 1;
        ll ar[n+2][n+2];
        memset(ar,0,sizeof ar);
        for(i=1,p=0;i<=n;p++,i++,c++){
            for(j=c,k=0;j<=n && k<v[p];j++,k++){
                ar[i][j]=1;
            }
            if(k<v[p]){
                for(j=1;k<v[p];j++,k++){
                    ar[i][j]=1;
                }
            }
        }
        if((m%n)==0)cout<<0<<endl;
        else cout<<2<<endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++)cout<<ar[i][j];
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
