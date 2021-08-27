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
map<string, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        e = m;
        for(i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                d = 0;
                while(v[i]==1)
                {
                    d++;
                    i++;
                    if(i==n)break;
                }
                s.pb(d);
                e = max(e,d);
                i--;
            }
            else if(v[i]==0)
            {
                f = 0;
                while(v[i]==0)
                {
                    c++;
                    f++;
                    if(f==1)
                    {
                        if(s.size()>0)ma[c] = s[s.size()-1];
                    }
                    i++;
                    if(i==n)break;
                }
                i--;
            }
        }
        d = 0;
        g = 0;
        for(i=0; i<n; i++)
        {
            if(v[i]==1)d++;
            else
            {
                if(m>0)m--,d++;
                else g++,d = d-ma[g];
            }
            if(d>=e){
                p = i;
                e = d;
            }
        }
        cout<<e<<endl;
        for(i=1,j=p;i<=e;j--,i++){
            v[j] = 1;
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
