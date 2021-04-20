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
string st,et,ft,pt,ct,mt,gt;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    for(i=0; i<3; i++)
    {
        if(i%3==0)et.pb('R'),ft.pb('G'),pt.pb('B');
        if(i%3==1)et.pb('G'),ft.pb('B'),pt.pb('R');
        if(i%3==2)et.pb('B'),ft.pb('R'),pt.pb('G');
    }
    cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        cin>>st;

        r = 0,g = 0, b = 0;
        d = 1e18;
        c = 0;
        vector<ll> ar,br,cr;

        ar.pb(0), br.pb(0),cr.pb(0);
        for(i=0,j=0; i<st.size(); j++, i++)
        {
            if(st[i]!=et[j])r++;
            if(st[i]!=ft[j])g++;
            if(st[i]!=pt[j])b++;
            if(j==2)j=-1;
            ar.pb(r);
            br.pb(g);
            cr.pb(b);
        }
        for(i=m,j=0;i<=st.size();j++,i++){
            c = ar[i]-ar[j];
            e = br[i]-br[j];
            f = cr[i]-cr[j];
            c = min(c,e);
            c = min(c,f);
            d = min(c,d);
        }
        cout<<d<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
