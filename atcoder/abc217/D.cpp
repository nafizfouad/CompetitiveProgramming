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
vector<ll> v,s,hh,rr,heh;
vector<pair<ll,ll> > ss,pp;
map<char,ll > ta,pa,sa,ma;
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
        cin>>n>>q;
        li.insert({1,n});
        for(i=0;i<q;i++){
            cin>>a>>b;
            if(a==2){
                auto it = li.lower_bound(make_pair(b,1e18));
                if(it==li.end())--it;
                if((*it).first>b)--it;
                c = (*it).first;
                d = (*it).second;

                cout<<d-c+1<<endl;
            }
            else{
                auto it = li.lower_bound(make_pair(b,1e18));
                if(it==li.end())--it;
                if((*it).first>b)--it;
                c = (*it).first;
                d = (*it).second;

                li.erase({c,d});
                li.insert({c,b});
                li.insert({b+1,d});
            }
        }

    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
