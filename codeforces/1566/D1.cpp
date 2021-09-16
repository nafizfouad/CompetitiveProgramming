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
vector<ll> v,s,hh;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,set<pair<ll,ll> > >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll>li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ss.pb({0,0});
        for(i=0; i<n*m; i++)
        {
            cin>>a;
            ss.pb({a,i+1});
            ma[a]++;
        }
        sort(ss.begin(),ss.end());
        e = 0;
        c = 0;
        for(i=1; i<=n*m; i++)
        {
            c++;
            if(c==1)e++;
            u = m-c+1;

            if(ma[ss[i].first]>=u)
            {

                d = m;
                for(l=1; l<=u; i++,d--,l++)
                {
                    p = d%m;

                    if(p==0)p=m;

                    me[e].insert({ss[i].second,p});

                    ma[ss[i].first]--;

                }
                i--;
                c = 0;
            }
            else
            {
                b = ma[ss[i].first];

                c = c+ma[ss[i].first]-1;

                d = i+b-1;

                for(l=b; l>0; i++,d--,l--)
                {
                    p = d%m;

                    if(p==0)p=m;

                    me[e].insert({ss[i].second,p});

                    ma[ss[i].first]--;

                }
                i--;
            }
        }
        c = 0;
       // cout<<me[1].size()<<endl;
        for(i=1; i<=n; i++)
        {
            si.clear();
            for(auto it = me[i].begin(); it!=me[i].end(); it++)
            {
                if(si.size()==0)
                {
                    si.insert((*it).second);
                }
                else
                {
                    auto ki = si.lower_bound((*it).second);
                    c = c+distance(si.begin(),ki);
                    si.insert((*it).second);
                }
            }
        }
        cout<<c<<endl;
        si.clear();
        me.clear();
        ss.clear();
        ma.clear();
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
