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
vector<ll> v[125],s,vv;
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
        for(i=0;i<124;i++)v[i].clear();
        ma.clear();
        cin>>st;
        cin>>et;
        for(i=0; i<st.size(); i++)
        {
            a = int(st[i]);
            v[a].pb(i);
            ma[a]++;
        }
        f = 0;
        for(i=0;i<et.size();i++){
            a = int(et[i]);
            if(ma[a]==0){f=1;break;}
        }
        if(f==1){cout<<-1<<endl;continue;}
        c = 0;
        d = 0;
        for(i=0; i<et.size(); i++)
        {

            c = 0;
            d++;
            //cout<<d<<" "<<i<<" "<<et[i]<<endl;
            while(1)
            {
                a = int(et[i]);
                auto it = lower_bound(v[a].begin(),v[a].end(),c);
                if(it==v[a].end())
                {
                    i--;
                    break;
                }
                else{
                    c = (*it)+1;
                    i++;
                }
                if(i==et.size()){break;}
            }
        }
        cout<<d<<endl;
        
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
