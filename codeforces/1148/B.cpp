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
        cin>>n>>m>>l>>r>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<m;i++){
            cin>>a;
            s.pb(a);
        }
        f = 0;
        g = -1;
        x = k;
        for(i=0;i<n;i++){
            b = v[i]+l;
            auto it = lower_bound(s.begin(),s.end(),b);
            if(it==s.end()){f=1;break;}
            d = distance(s.begin(),it);
            e = d+k;
//            cout<<e<<" "<<d<<" "<<k<<" "<<b<<" "<<(*it)<<endl;
//            if((*it)>b)e--;
            if(e>=m){f=1;break;}
            else g = max(g,s[e]+r);
            k--;
            if(k<0)break;
        }
        if(x>=n || x>=m)cout<<-1<<endl;
        else if(f==0)cout<<g<<endl;
        else cout<<-1<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
