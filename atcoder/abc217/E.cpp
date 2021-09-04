;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
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
vector<ll> v,s,hh,rr,heh;
vector<pair<ll,ll> > ss,pp;
map<char,ll > ta,pa,sa,ma;
map<ll,char >se,me;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;

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
        f = 0;
        for(i=0;i<n;i++){
            cin>>a;
            if(a==1){
                cin>>b;
                v.pb(b);
            }
            else if(a==2)v.pb(-1);
            else if(a==3)v.pb(-2);
        }
        for(i=0; i<n; i++)
        {
            a = v[i];
            if(a>=0)
            {
                de.pb(a);
            }
            else if(a==-1)
            {
                if(f==1 && c<d)
                {
                    auto it = li.begin();
                    cout<<((*it))<<endl;
                    li.erase(it);
                    c++;
                }
                else{
                    cout<<de.front()<<endl;
                    de.pop_front();
                }
            }
            else
            {
                f = 1;
                for(j=0;j<de.size();j++)li.insert(de[j]);
                de.clear();
                d = li.size();
                c = 0;
            }
        }

    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
