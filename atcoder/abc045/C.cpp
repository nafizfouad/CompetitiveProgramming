;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,heh;
vector<vector<ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>st;
        n = st.size()-1;
        for(i=1;i<=n;i++)v.pb(i);
        c = pow(2,n);
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    s.pb(v[j]);
                }
            }
            if(s.size()>0)ss.pb(s);
            s.clear();
        }
        s.clear();
        s.pb(15);
        ss.pb(s);
        c = 0;
        for(i=0;i<ss.size();i++){
            j = 0;
            c = 0;
            for(k=0;k<st.size();k++){
                if(k==ss[i][j]){
                    d = d+c;
                    j++;
                    c = 0;
                }
                c = c*10+(st[k]-'0');
            }
            d = d+c;
        }
        cout<<d<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
