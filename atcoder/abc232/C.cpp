;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<vector>
#include<map>
#include<functional>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<list>
#include<iterator>
#include<cstring>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[200005],hh;
vector<pair<ll,ll> > ss,pp,rr;
map<ll,set<ll> > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;
newset see;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    // cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=1; i<=m; i++)
        {
            cin>>a>>b;
            ma[a].insert(b);
            ma[b].insert(a);
        }
        for(i=1; i<=m; i++)
        {
            cin>>a>>b;
            sa[a].insert(b);
            sa[b].insert(a);
        }
        d = 0;
//        v.pb(3);
//        v.pb(2);
//        v.pb(1);
//        v.pb(4);
        for(i=1; i<=n; i++)v.pb(i);
        do
        {
            f = 0;
            c = 0;
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    auto it = ma[i+1].find(j+1);
                    auto ki = ma[j+1].find(i+1);
                    if(it!=ma[i+1].end() && ki!=ma[j+1].end())
                    {
                        c++;
                       // cout<<i+1<<" h "<<j+1<<endl;
                       auto be = sa[v[i]].find(v[j]);
                       auto ce = sa[v[j]].find(v[i]);
                        if(be!=sa[v[i]].end() && ce!=sa[v[j]].end())
                        {
                            c++;
                        }
                        else
                        {
                            f=1;
                            break;
                        }
                    }
                }
                if(f==1)break;
            }
            if(f==0 && c==(m+m))
            {
                d=1;
                break;
            }
        }
        while(next_permutation(v.begin(),v.end()));
        if(d==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
