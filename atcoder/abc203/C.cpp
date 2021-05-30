;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<vector>
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
//vector<ll> v,s,vv,hh;
vector< pair<ll,ll> > ss,pp;
//map<ll,ll > ta,pa,sa,ma;
//map<ll,char >se,me;
//priority_queue<ll > aq,tq,pq,nq,mq,xq;
//string st,et,ft,pt,ct;
//deque<ll> de,ne;
//multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>k;
        e = 0;
        ss.pb({0,0});
        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        sort(ss.begin(),ss.end());
        d = -1;
        for(i=1; i<ss.size(); i++)
        {
            if((ss[i].first-ss[i-1].first)>k)
            {
                d=i;
                break;
            }
            else k = k-(ss[i].first-ss[i-1].first),k=k+ss[i].second;
        }
        if(d==-1)e=k+ss[ss.size()-1].first;
        else e = ss[d-1].first+k;
        cout<<e<<endl;
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
