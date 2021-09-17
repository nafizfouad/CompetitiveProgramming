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
vector< pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<pair<ll,ll> > >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    // cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            ma[a]++;
        }
        for(i=0;i<m;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<m;i++){
            a = v[i];
            s.clear();
            sa.clear();
            while(a){
                c = a%2;
                s.pb(c);
                a = a/2;
            }
            d = 0;

            for(j=s.size()-1;j>=0;j--){
                e = pow(2,j);
                if(s[j]==1)f = 1+sa[e];
                else f = sa[e];
                if(ma[e]>=f)d = d+f,x=1;
                else{
                    d = d+ma[e];
                    g = f-ma[e];
                    u = pow(2,j-1);
                    sa[u] = sa[u]+(2*g);
                    x = 2;
                }
            }
            if(x==2)cout<<-1<<endl;
            else cout<<d<<endl;
        }
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
