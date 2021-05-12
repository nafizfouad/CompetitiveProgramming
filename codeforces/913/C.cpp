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
vector<pair<ll,ll> > ss,pp;
map<ll,char > ta,pa,sa,ma;
map<ll,multiset<ll> >se,me;
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
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(pow(2,i));
            v.pb(a);
        }
        for(i=n; i<=30; i++)
        {
            s.pb(pow(2,i));
            v.pb(1e18);
        }
        for(i=0; i<v.size(); i++)
        {
            for(j=i+1; j<v.size(); j++)
            {
                b = s[j]/s[i];
                b = b*v[i];
                v[j] = min(b,v[j]);
            }
        }
        while(m)
        {
            vv.pb(m%2);
            m = m/2;
        }
        c = 0;
        for(i=0; i<vv.size(); i++)
        {
            if(v[i]<c)c=v[i];
            if(vv[i]==1)c=c+v[i];
        }
        for(i=vv.size(); i<v.size(); i++)
        {
            c= min(c,v[i]);
        }
        cout<<c<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
