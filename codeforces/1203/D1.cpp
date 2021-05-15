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
map<pair<ll,ll>, ll >se,me;
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
        cin>>et;
        r = -1e18;
        for(i=0;i<st.size();i++){
                m = st.size();
            for(j=i;j<m;m--){
                    l = 0;
                for(k=0;k<j;k++){
                   if(st[k]==et[l])l++;
                  if(l==et.size())break;
                 // cout<<st[k]<<" ";
                }
                for(k=m;k<st.size();k++){
                        if(st[k]==et[l])l++;
                  if(l==et.size())break;
                    //cout<<st[k]<<" ";
                }
               if(l==et.size())
                    {
                    b = m-j;
                    //cout<<b<<endl;
                    r = max(b,r);
                }
            }
        }
        if(r==-1e18)r=0;
        cout<<r<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
