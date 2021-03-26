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
vector<ll> v,s,vv;
vector<vector<ll> > ss,pp;
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
    cin>>t;
    p = 0;
    while(t--)
    {
       cin>>n;
       for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
        sa[a]++;
       }
       for(i=1;i<=n;i++)if(sa[i]==0)li.insert(i),si.insert(i);
       for(i=0;i<n;i++){
          ma[v[i]]++;
          if(ma[v[i]]==1){
            s.pb(v[i]);
          }
          else{
            auto it = li.begin();
            a = (*it);
            s.pb(a);
            li.erase(it);
          }
       }
       ma.clear();
       for(i=0;i<n;i++){
        ma[v[i]]++;
//        for(auto ki = si.begin();ki!=si.end();ki++){
//            cout<<(*ki)<<" ";
//        }
//        cout<<endl;
          if(ma[v[i]]==1){
            vv.pb(v[i]);
          }
          else{
            auto it = si.lower_bound(v[i]);
           if(it==si.end())--it;
           else if((*it)>v[i])--it;
            a = (*it);
            vv.pb(a);
            si.erase(it);
          }
       }
       for(i=0;i<s.size();i++){
        cout<<s[i]<<" ";
       }
       cout<<endl;
       for(i=0;i<s.size();i++){
        cout<<vv[i]<<" ";
       }
       cout<<endl;
       li.clear();
       v.clear();
       s.clear();
       ma.clear();
       vv.clear();
       si.clear();
       sa.clear();
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
