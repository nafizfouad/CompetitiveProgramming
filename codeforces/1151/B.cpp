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
vector<ll> v,s,vv;
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
        cin>>n>>m;
        d = -1;
        for(i=0; i<n; i++)
        {
            ma.clear();
            v.clear();
            for(j=0;j<m;j++){
                cin>>a;
                v.pb(a);
                ma[a]++;
            }
            ss.pb(v);
            if(ma.size()>1)d=i;
        }
        if(d==-1){
                c = ss[0][0];
            for(i=1;i<n;i++){
                c = c^ss[i][0];
            }
          if(c==0)cout<<"NIE"<<endl;
          else {
            cout<<"TAK"<<endl;
            for(i=0;i<n;i++)cout<<1<<" ";
            cout<<endl;
          }
        }
        else{
            c = 0;
            for(i=0;i<n;i++){
                if(i!=d)c = c^ss[i][0];
            }
            for(i=0;i<m;i++){
                e = c^ss[d][i];
                if(e!=0){e=i;break;}
            }
            cout<<"TAK"<<endl;
            for(i=0;i<d;i++)cout<<1<<" ";
            cout<<e+1<<" ";
            for(i=d+1;i<n;i++)cout<<1<<" ";
            cout<<endl;
        }
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
