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
        cin>>st;
        cin>>x>>y>>z;
        cin>>n>>m>>p;
        cin>>k;
        a =0, b= 0, c= 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='B')a++;
            else if(st[i]=='S')b++;
            else c++;
        }
        l = 0;
        r = 1e12+500;
        while(l<=r){
            d = (l+r)/2;
            e = max(0LL,((d*a)-x))*n;
            f = max(0LL,((d*b)-y))*m;
            g = max(0LL,((d*c)-z))*p;
            if((e+f+g)<k)l = d+1,u=d;
            else if((e+f+g)==k){u=d;break;}
            else r=d-1;
        }
        cout<<u<<endl;
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
