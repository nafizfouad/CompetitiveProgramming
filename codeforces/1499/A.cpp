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
    cin>>t;
    p = 0;
    while(t--)
    {
        p++;
        cin>>n>>l>>r;
        cin>>m>>k;
        c = min(l,r);
        d = (c/2)*2;
        if(c%2==1)d++;
        e = max(l,r);
        f = e-c;
        f = f/2;
        d = d+f;
        g = 0;

        if(d<m)g=1;
        l = n-l;
        r = n-r;

        c = min(l,r);
        d = (c/2)*2;
        if(c%2==1)d++;
        e = max(l,r);
        f = e-c;
        f = f/2;
        d = d+f;

        if(d<k)g=1;
        if(g==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
