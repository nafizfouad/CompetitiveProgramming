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
vector<ll > ss[200005],pp;
map<ll,ll > ta,pa,sa,ma;
vector<pair < pair<ll,ll>,ll> > me,mem;
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
        if(n==2){cout<<-1<<endl;continue;}
        else if(n==3){
            cout<<2<<" "<<9<<" "<<7<<endl;
            cout<<4<<" "<<6<<" "<<3<<endl;
            cout<<1<<" "<<8<<" "<<5<<endl;
            continue;
        }
        b = n/2;
        b = b*n;
        b--;
        c = n*n-b;
        d = 1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j%2==0)cout<<d<<" ",d++;
                else cout<<c<<" ",c++;
            }
            cout<<endl;
        }
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

