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
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=0;i+1<n;i++){
            a = v[i+1]-v[i];
            ma[a]++;
        }
        if(n==1)cout<<0<<endl;
        else if(ma.size()==1)cout<<0<<endl;
        else if(ma.size()>2)cout<<-1<<endl;
        else {
            auto it = ma.begin();
            b = (*it).first;
            ++it;
            c = (*it).first;
            if(b>=0 || c<=0)cout<<-1<<endl;
            else{
                d = -b+c;
                e = c;
                s.pb(v[0]);
                g = 0;
                if(d<=v[0])g=1;
                for(i=1;i<n;i++){
                    f = (s[i-1]+e)%d;
                    s.pb(f);
                    if(f!=v[i]){g=1;break;}
                }
                if(g==1)cout<<-1<<endl;
                else cout<<d<<" "<<e<<endl;
            }
        }
        v.clear();
        ma.clear();
        s.clear();
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
