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
vector<pair<ll,ll> > v,s,vv;
vector<vector<ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

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
        if(n>m)swap(n,m);
        for(i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
               if(m%i==0)li.insert(i);
                b = n/i;
                if(m%b==0)li.insert(b);
            }
        }
        cin>>k;
        for(i=0; i<k; i++)
        {
            cin>>a>>b;
            auto it = li.lower_bound(b);
            if(it==li.end())
            {
                --it;
                if((*it)>=a)cout<<(*it)<<endl;
                else cout<<-1<<endl;
            }
            else{
                if((*it)!=b)--it;
                if((*it)>=a)cout<<(*it)<<endl;
                else cout<<-1<<endl;
            }

        }
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
