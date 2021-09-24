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
vector<ll> s,vv,hh,v;
vector< pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        c = 0;
        ma[0] = 1;
        sa[0] = -1;
        e = 0;
        for(i=0; i<n; i++)
        {
            c = c+v[i];
            if(ma[c]==0)
            {
                sa[c] = i;
                ma[c]++;
            }
            else
            {
                r = n-i;
                d++;
                if(d==1)b=sa[c]+2,l = sa[c]+1, e= e+(r*b);
                else
                {
                    if(sa[c]>=l)
                    {
                        b = sa[c]-l+1;
                       // cout<<sa[c]<<" "<<l<<" "<<i<<endl;
                        l = sa[c]+1;
                        e = e+(r*b);
                    }
                }
                sa[c] = i;
            }
        }
        f = (n*(n+1))/2;
        cout<<f-e<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
