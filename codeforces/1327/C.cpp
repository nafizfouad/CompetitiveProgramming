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
    // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=0; i<k; i++)
        {
            cin>>a>>b;
            vv.pb({a,b});
        }
        for(i=0; i<k; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        for(i=1;i<n;i++)st.pb('U');
        for(i=1;i<m;i++)st.pb('L');
        for(i=1;i<=n;i++){
            if(i%2==1){
                for(j=1;j<m;j++)st.pb('R');
                st.pb('D');
            }
            else{
                for(j=1;j<m;j++)st.pb('L');
                st.pb('D');
            }
        }
        cout<<st.size()<<endl;
        cout<<st<<endl;
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
