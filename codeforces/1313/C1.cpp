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
vector< pair<pair<ll,ll>, ll> > ss,pp;
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
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        e = -1e18;
        for(i=0; i<n; i++)
        {
            s.clear();
            c = v[i];
            d = v[i];
            for(j=i-1; j>=0; j--)
            {
                if(v[j]>=c)d=d+c,s.pb(c);
                else d = d+v[j],c=v[j],s.pb(v[j]);
            }
            reverse(s.begin(),s.end());
            s.pb(v[i]);
            for(j=i+1; j<n; j++)
            {
                if(v[j]>v[j-1])d = d+v[j],s.pb(v[j]);
                else
                {
                    c = v[j];
                    d = d+v[j];
                    s.pb(v[j]);
                    for(k=j+1; k<n; k++)
                    {
                        if(v[k]>=c)d=d+c,s.pb(c);
                        else d = d+v[k],c=v[k],s.pb(v[k]);
                    }
                    break;
                }
            }
            if(d>e){
                e = d;
                vv = s;
            }
        }
        reverse(v.begin(),v.end());
        for(i=0; i<n; i++)
        {
            s.clear();
            c = v[i];
            d = v[i];
            for(j=i-1; j>=0; j--)
            {
                if(v[j]>=c)d=d+c,s.pb(c);
                else d = d+v[j],c=v[j],s.pb(v[j]);
            }
            reverse(s.begin(),s.end());
            s.pb(v[i]);
            for(j=i+1; j<n; j++)
            {
                if(v[j]>v[j-1])d = d+v[j],s.pb(v[j]);
                else
                {
                    c = v[j];
                    d = d+v[j];
                    s.pb(v[j]);
                    for(k=j+1; k<n; k++)
                    {
                        if(v[k]>=c)d=d+c,s.pb(c);
                        else d = d+v[k],c=v[k],s.pb(v[k]);
                    }
                    break;
                }
            }
            if(d>e){
                e = d;
                reverse(s.begin(),s.end());
                vv = s;
            }
        }
         for(i=0;i<vv.size();i++)cout<<vv[i]<<" ";
         cout<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;