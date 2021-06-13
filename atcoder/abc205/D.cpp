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
map<ll,ll > ta,pa,sa,ma;
map<ll,char >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        b = v[0]-1;
        if(b!=0)
        {
            ss.pb({b,0});
        }
        for(i=1; i<n; i++)
        {
            b = v[i]-v[i-1]-1;
            if(b!=0)
            {
                ss.pb({b,i});
            }
        }
        for(i=1; i<ss.size(); i++)
        {
            ss[i].first +=ss[i-1].first;
        }
        for(i=0; i<k; i++)
        {
            cin>>a;
            if(ss.size()==0){cout<<a+v[n-1]<<endl;continue;}
            auto it= lower_bound(ss.begin(),ss.end(),make_pair(a,0LL));
            if(it==ss.end())
            {
                b = ss[ss.size()-1].first;
                c = v[n-1];
                d = a-b;
                e = c+d;
                cout<<e<<endl;
            }
            else if(it==ss.begin())cout<<a<<endl;
            else
            {
                d = distance(ss.begin(),it);
                p = ss[d].second-1;
                l = a-ss[d-1].first;
                r = v[p]+l;
                cout<<r<<endl;
            }
        }
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
