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
vector<ll> v[20005],s,hh,rr,heh;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll> ,ll >se,me;
map<ll ,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
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
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            me[{a,b}]++;
           // ma[a]++;
            he[a].pb(b);
        }
        d = 0;
        for(auto it = he.begin();it!=he.end();it++){
            a = (*it).first;
            sa[a]=1;
            if(he[a].size()>1){
                for(i=0;i<he[a].size();i++){
                    for(j=i+1;j<he[a].size();j++){
                        b = he[a][i];
                        c = he[a][j];
                        //cout<<"he"<<endl;
                        for(auto ki= he.begin();ki!=he.end();ki++){
                            l = (*ki).first;
                            if(sa[l]==0)if(me[{l,b}]>0 && me[{l,c}]>0)d++;
                        }
                    }
                }
            }
        }
        cout<<d<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
