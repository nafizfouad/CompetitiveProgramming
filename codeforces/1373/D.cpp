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
vector<ll> v,s;
vector<pair<ll,ll> > vv,ss,pp;
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
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        l = 0;
        d = -1e18;
        x = -1;
        for(i=0; i+1<n; i+=2)
        {
            if(v[i]<=v[i+1]){
                l = l+v[i+1]-v[i];
                if(x==-1){
                    x = i;
                }
                if(l>d){
                    d = l;
                    z = x;
                    y = i;
                }

            }
            else {
                l =  l-(v[i]-v[i+1]);
                if(l<=0)l=0,x=-1;

            }
        }
        l = 0;
         x= -1;
        for(i=1; i+1<n; i+=2)
        {
            if(v[i]>=v[i+1]){
                l = l+v[i]-v[i+1];
                if(x==-1)x=i;
                 if(l>d){
                    d = l;
                    z = x;
                    y = i;
                 }
            }
            else {
                l =  l-(v[i+1]-v[i]);
                if(l<=0)l=0, x = -1;
            }
        }
        //cout<<d<<" "<<z<<" "<<y<<endl;
        if(d!=-1e18)reverse(v.begin()+z,v.begin()+y+2);
//        for(i=0;i<n;i++)cout<<v[i]<<" ";
//        cout<<endl;
c = 0;
        for(i=0;i<n;i++){
            if(i%2==0)c+=v[i];
        }
        cout<<c<<endl;
        v.clear();
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
