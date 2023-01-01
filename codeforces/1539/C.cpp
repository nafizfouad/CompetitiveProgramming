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
vector<ll> v,s,vv;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<char,ll > ta,pa,sa,ma;
map<pair<char,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<char,ll> > de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        d = 1;
        for(i=1; i<n; i++)
        {
            b = v[i]-v[i-1];
            if(b>k)
            {
                d++;
                e = b/k;
                if(b%k==0)e--;
                s.pb(e);
            }
        }
        sort(s.begin(),s.end());
        for(i=0; i<s.size(); i++)
        {
            if(m>=s[i])m=m-s[i],d--;
            else break;
        }
        cout<<d<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;


