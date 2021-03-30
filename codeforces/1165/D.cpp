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
vector<string> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> > me,he,mem;
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
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            ma[a]++;
        }
        sort(v.begin(),v.end());
        if(v.size()==1)
        {
            f = 0;
            for(i=2; i*i<=v[0]; i++)
            {
                if(v[0]%i==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)cout<<v[0]*v[0]<<endl;
            else cout<<-1<<endl;
        }
        else
        {
            b = v[0]*v[v.size()-1];
            for(i=2;i*i<=b;i++){
                if(b%i==0){
                    sa[i]++;
                    if(i!=(b/i))sa[b/i]++;
                }
            }
            if(sa==ma)cout<<b<<endl;
            else cout<<-1<<endl;
        }
        v.clear();
        sa.clear();
        ma.clear();
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
