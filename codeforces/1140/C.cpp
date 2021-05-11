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
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,multiset<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            me[b].insert(a);
        }
        h = -1e18;
        e = 0;
        for(auto it = me.rbegin(); it!=me.rend(); it++)
        {
            a = (*it).first;
            c = m-li.size();
            d = 0;
            for(auto ki = me[a].rbegin(); ki!=me[a].rend(); ki++)
            {
                d++;
                if(d>c)
                {
                    if(li.size()==0)li.insert((*ki)),e=e+(*ki);
                    else
                    {
                        auto he  = li.begin();
                        if((*he)<(*ki))
                        {
                            e= e-(*he);
                            li.erase(li.find((*he)));
                            li.insert((*ki));
                            e = e+(*ki);
                        }
                        else break;
                    }
                }
                else e = e+(*ki),li.insert((*ki));
            }
            g = a*e;
            h = max(g,h);
        }
        cout<<h<<endl;
        ///playlist - last theke shuru hobe, k er kom thakle top gula must add, er por theke boro hoile add, k>= thakle shuru thekei shudhu boro hoile add
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
