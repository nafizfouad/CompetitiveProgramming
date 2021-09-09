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
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        b = 0;

        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
            vv.pb(a);
        }

        for(i=n-1,j=0; i>=0; j++, i--)
        {
            if(i<n-1)vv[i] = vv[i]+vv[i+1];

            a = vv[i];
            b = vv[i]-v[i];

            if(b<=0)ar[i]++,ar[n]--;
            else
            {
                auto it = lower_bound(vv.rbegin(),vv.rbegin()+j,b);
                if (it==vv.rend())--it;
                d = distance(vv.rbegin(),it);
                e = n-d-1;
                ar[i]++,ar[e]--;
                if((*it)>b)
                {

                    ma[e]+=(*it)-b;
                }
            }

        }
        for(i=1; i<n; i++)
        {
            ar[i] = ar[i]+ar[i-1];
        }
        c = 0;
        for(i=0; i<n; i++)cout<<(ar[i]*s[i])+ma[i]<<" ";
    }

}
///reverse order e prefix sum then binary search
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
