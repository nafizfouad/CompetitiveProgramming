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
vector<ll> ss,pp;
map<char,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
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
        cin>>st;
        cin>>et;
        ll ar[n+5],br[n+5];
        memset(ar,0,sizeof ar);
        memset(br,0,sizeof br);
        for(i=0;i<n;i++){
            if(st[i]=='1')ar[i]++;
            else br[i]++;
        }
        for(i=1;i<n;i++){
            ar[i]+=ar[i-1];
            br[i]+=br[i-1];
        }
        c = 0;
        f = 0;
        for(i=n-1;i>=0;i--){
            if(st[i]!=et[i] && c%2==0){
                if(ar[i]==br[i])c++;
                else {f=1;break;}
            }
            else if(st[i]==et[i] && c%2==1){
                if(ar[i]==br[i])c++;
                else {f=1;break;}
            }
        }
        if(f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
