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
vector<string> v,s,heh;
vector< pair< pair<ll,ll>,pair<ll,ll> > > ss,pp,hh,rr;
map<char,char > ta,pa,sa,ma;
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
        cin>>et;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>st;
            v.pb(st);
        }
        char ch;
        for(i=0,ch = '1';i<26;ch++,i++){
            ma[et[i]] = ch;
            sa[ch] = et[i];
        }
        for(i=0;i<n;i++){
            for(j=0;j<v[i].size();j++){

                //sa[v[i][j]] = v[i][j];
                v[i][j] = ma[v[i][j]];
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++){
            for(j=0;j<v[i].size();j++){
                v[i][j] = sa[v[i][j]];
            }
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<endl;
        }
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
