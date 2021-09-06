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
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);


int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>k>>m;
        if(((n-1)*k)<m)cout<<"NO"<<endl;
        else if(k>m)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            c = 0;
            f = 0;
            for(i=1;i<=k;i++){
                b = k-i;
                c = c+(n-1);
                if(c+b>m){
                    c = c-(n-1);
                    if(b==0 && i%2==0)cout<<n-(m-c)<<endl;
                    else if(b==0 && i%2==1)cout<<1+(m-c)<<endl;
                    else{
                        e = m-c;
                        g = e-b;
                        if(i%2==0)p = n-g;
                    else if(i%2==1)p = 1+g;
                    cout<<p<<" ";
                    for(j=i+1,l=1;j<=k;l++,j++){
                        if(l%2==1)cout<<p+1<<" ";
                        else cout<<p<<" ";
                    }
                    cout<<endl;
                    break;
                    }
                }
                else if(i%2==1)cout<<n<<" ";
                else if(i%2==0)cout<<1<<" ";
            }
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
