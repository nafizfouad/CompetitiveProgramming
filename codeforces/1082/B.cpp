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
vector<ll> v[200005],s,vv,hh;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
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
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        cin>>st;
        c = 0;
        g = -1e18;
        l = - 1e18;
        y = 0;
        for(i=0;i<st.size();i++){
            if(st[i]=='G'){
                    y++;
                    d  = c;
            c = 0;
                while(st[i]=='G'){
                    i++;
                    c++;
                    if(i==st.size())break;
                }
                g = max(g,c);
                if(f==1)h = c+d+1,l = max(h,l);
                f = 0;
                i--;
            }
            else{
                    e = 0;
                    f = 0;
                    r = 1;
                    x = i;
                while(st[i]=='S'){
                    e++;
                    i++;
                    if(i==st.size())break;
                }
                i--;
                if(e==1 && x!=0)f = 1;
            }
        }
        if(y==2)l--;
          c = max(l,g);
          
          if(c==-1e18)c=0;
          else if(g>=l && r==1 && y>1)c++;
          cout<<c<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
