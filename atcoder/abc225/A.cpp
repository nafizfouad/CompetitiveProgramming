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
#include<list>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<char> v,s,vv[200005];
vector<pair<ll,ll> > ss,pp,hh,rr;
map<string,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll bs(ll n, ll x)
{

    ll a,b,c=1,d = n-2, an = 1e18, su = 0;

    while(d>1)
    {

        if(abs(v[c]+v[d]-x)<an)
        {
            an = abs(v[c]+v[d]-x);
            a = c;
            b = d;
        }
        if(v[c]+v[d]>x)
        {
            d--;
        }
        else
        {
            c++;
        }
        return an;
    }


}

int main()
{
    fast;
   // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>st;
        sort(st.begin(),st.end());
        c = 0;
        do{
            c++;
            ma[st]++;
        }while(next_permutation(st.begin(),st.end()));
        cout<<c<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
