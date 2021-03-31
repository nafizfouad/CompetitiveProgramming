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
vector<ll> v[200006],s(100005),vv;
vector<string> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
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
   // cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0; i+1<n; i++)
        {
         cin>>a>>b;
          v[a].pb(b);
          v[b].pb(a);
        }
        for(i=0;i<n;i++){
            cin>>a;
            vv.pb(a);
            ta[a]++;
        }
        f = 0;
        if(ta.size()!=n)f=1;

        if(vv[0]!=1)f=1;
        d = 0;
        for(i=0;i<n;i++){
            a = vv[i];
            c = 0;
            ma.clear();
            pa.clear();
            for(j=0;j<v[a].size();j++){
             if(sa[v[a][j]]==0){
                c++;
                ma[v[a][j]]=1;
             }
            }
            e = d+1;
            d = d+c;
            for(j=e;j<=d;j++){
               pa[vv[j]]=1;
            }

            if(ma!=pa){f=1;break;}
            sa[a]++;
        }
        if(f==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
