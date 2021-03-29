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
    while(t--)
    {

        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>a;
            si.insert(a);
            v.pb(a);
            ma[a]++;
        }
        sort(v.begin(),v.end(),greater<ll>());
        f = 0;
        for(i=0;i<n;i++){
            if(ma[v[i]]>0){
                    f++;
                ma[v[i]]--;
                c=m-v[i];
                if(ma[v[i]]==0)si.erase(v[i]);
                while(c>0 && si.size()>0){
                    auto it = si.lower_bound(c);
                    if(it==si.end())--it;
                    else if(it==si.begin() && (*it)>c)break;
                    else if((*it)>c)--it;
                    ma[(*it)]--;
                    c = c-(*it);
                    if(ma[(*it)]==0)si.erase(it);
                }
            }
        }
        cout<<f<<endl;
        ma.clear();
        si.clear();
        v.clear();
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
