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
vector<ll> v,s,vv,hh;
vector<vector<ll> > ss,pp;
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
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r>>m;
        c = 0;
        d = (((r-l)+1)*((r-l)+2))/2;
        for(i=l,j=n;i<=r;i++,j--){
            c = c+j;
            v.pb(j);
        }
        if(m<d || m>c)cout<<-1<<endl;
        else{
            for(i=v.size()-1,j=1;i>=0;j++,i--){
                d = v[i]-j;
                e = c-m;
                if(e>=d){
                    v[i] = j;
                     c = c-d;
                }
                else{
                    v[i] = v[i]-e;
                    break;
                }
            }
            for(i=0;i<v.size();i++)ma[v[i]]=1;
            j = 1;
            for(i=1;i<l;i++){
                if(ma[j]==1)i--,j++;
                else cout<<j<<" ",j++;
            }
            for(i=0;i<v.size();i++)cout<<v[i]<<" ";
            for(i=r+1;i<=n;i++){
                if(ma[j]==1)i--,j++;
                else cout<<j<<" ",j++;
            }
            cout<<endl;

        }v.clear();
            ma.clear();
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
