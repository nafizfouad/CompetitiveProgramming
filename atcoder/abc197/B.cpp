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
    cin>>n>>m;
    cin>>c>>d;
    char ar[105][105];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>ar[i][j];
        }
    }
    e = 0;
    for(i=d+1;i<=m;i++){
        if(ar[c][i]=='.')e++;
        else break;
    }
    for(i=d-1;i>=1;i--){
        if(ar[c][i]=='.')e++;
        else break;
    }
    for(i=c+1;i<=n;i++){
        if(ar[i][d]=='.')e++;
        else break;
    }
    for(i=c-1;i>=1;i--){
        if(ar[i][d]=='.')e++;
        else break;
    }
    if(ar[c][d]=='.')e++;
    cout<<e<<endl;
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
