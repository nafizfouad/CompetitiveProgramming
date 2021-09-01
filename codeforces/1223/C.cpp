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
vector<ll > v,s,vv,hh;
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
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        cin>>m>>l;
        cin>>k>>r;
        cin>>o;

        if(m<k)swap(m,k),swap(l,r);
        if(m==k && l>r)swap(l,r);
        sort(v.begin(),v.end(),greater<ll>());

        for(i=1; i<n; i++)
        {
            v[i]+=v[i-1];
        }
        c = 1;
        d = n;
        g = 1e18;
        while(c<=d)
        {
            e = (c+d)/2;
            f = 0;

            x = e/l;
            h = x;
            aa = (100.0/(m*1.0));
            if(x>0){
            bb = ceil((v[x-1]*1.0)/aa);
            x = bb;
            f = f+x;}



            z = __gcd(l,r);
            z = (l*r)/z;
            q = z;
            z = e/z;
            j = 0;
            if(q<=e){
            j = z;
            aa = (100.0/(k*1.0));
            bb = ceil((v[z-1]*1.0)/aa);
            z = bb;
            f = f+z;}

            y = e/r;
            y = y-j;
            if(y>0){
                aa = (100.0/(k*1.0));
                if(h>0)u = v[h+y-1]-v[h-1];
                else u = v[h+y-1];
            bb = ceil((u*1.0)/aa);
            y = bb;
            f = f+y;
            }


            if(f>=o)d=e-1,g = min(g,e);
            else c = e+1;
        }
        if(g==1e18)g=-1;
        cout<<g<<endl;
        v.clear();
        ma.clear();
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
