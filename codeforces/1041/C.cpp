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
vector<pair<ll,ll> > v,s,vv;
vector<vector<ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m>>k;
        vector<ll> hehe(200006);
        for(i=0;i<n;i++){
            cin>>a;
            v.pb({a,i});
            li.insert(a);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)ma[v[i].first] = i;
        c = -1e18;
        for(i=0;i<n;i++){
            a = v[i].first+k+1;
            auto it = li.lower_bound(a);
            if(it==li.end())e = n-i,d=n;
            else d = ma[(*it)],e = d-i;
            if(e>c){
                c = e;
                x = i;
                y = d;
            }
        }
        for(i=x-1,j=c;i>=0;j--,i--){
            hehe[v[i].second]=j;
            if(j==1)j=c+1;
        }
        for(i=x,j=1;i<y;j++,i++)hehe[v[i].second]=j;
        for(i=y,j=1;i<n;j++,i++){hehe[v[i].second]=j;if(j==c)j=0;}
        cout<<c<<endl;
        for(i=0;i<n;i++)cout<<hehe[i]<<" ";
        cout<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
