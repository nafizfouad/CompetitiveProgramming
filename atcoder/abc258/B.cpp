;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<string> v,s,heh;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        char ar[n+2][n+2];
        c = 0;
        d = -1e18;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>ar[i][j];
            }
        }
        for(i=1; i<=n; i++)
        {

            for(j=1; j<=n; j++)
            {
                b=i;
                d=j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    d++;
                    if(d>n)d=1;
                }
                v.pb(st);

                b=i;
                d=j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    d--;
                    if(d<1)d=n;
                }
                v.pb(st);

                b=i;
                d=j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    b++;
                    if(b>n)b=1;
                }
                v.pb(st);

                b=i;
                d=j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    b--;
                    if(b<1)b=n;
                }
                v.pb(st);
            }

        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                b = i;
                d = j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    b++;
                    d++;
                    if(d>n)d=1;
                    if(b>n)b=1;
                }
                v.pb(st);

                b = i;
                d = j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    b++;
                    d--;
                    if(d<1)d=n;
                    if(b>n)b=1;
                }
                v.pb(st);

                b = i;
                d = j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    b--;
                    d--;
                    if(d<1)d=n;
                    if(b<1)b=n;
                }
                v.pb(st);

                b = i;
                d = j;
                st.clear();
                for(k=1; k<=n; k++)
                {
                    st.pb(ar[b][d]);
                    b--;
                    d++;
                    if(b<1)b=n;
                    if(d>n)d=1;
                }
                v.pb(st);
            }
        }

        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
    }

}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
