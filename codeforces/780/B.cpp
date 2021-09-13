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
vector<ld> v,s,hh;
vector<vector<ll> > ss,pp;
map<ld,ll > ta,pa,sa,ma;
map<pair<ld,ld>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll>li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>aa;
            v.pb(aa);
        }
        for(i=0; i<n; i++)
        {
            cin>>aa;
            s.pb(aa);
        }
        aa = 0.0;
        bb = 40000000000000.0;
        while(k<200)
        {
            cc = (aa+bb)/2.0;k++;

            me[{aa,bb}]++;
           // cout<<cc<<" "<<ma[cc]<<endl;
            if(me[{aa,bb}]>1)break;
            f = 0;
            for(i=0; i<n; i++)
            {
                dd = s[i]*cc;
                ee = v[i]+dd;
                ff = v[i]-dd;
                // cout<<dd<<" "<<ee<<" "<<ff<<endl;
                if(i==0)
                {
                    gg = ee;
                    kk = ff;
                }
                else if(ff>gg || kk>ee)
                {
                    f=1;
                    break;
                }
                else
                {
                    if(ff>kk)kk=ff;
                    if(ee<gg)gg=ee;
                }

            }
            if(f==0)bb=cc;
            else aa = cc;
        }
        cout<<fixed<<setprecision(10)<<bb<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
