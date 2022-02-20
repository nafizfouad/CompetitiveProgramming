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
vector<ll> v,s,vv[100005],hh;
vector<multiset<ll> > pp[100006],ss;
vector<pair<ll,ll> > rr;
map<ll,ll > ta,pa,sa,ma;
map<string,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll > li,si;
newset see;

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
            cin>>a;
            v.pb(a);
        }
        c = v[0];
        ma[c]++;
        d = 1;
        s.pb(1);
        for(i=1; i<n; i++)
        {
            if(v[i]==c)
            {
                ma[c]++;
                d++;
                //cout<<c<<" "<<ma[c]<<" h "<<i<<" "<<d<<endl;
                if(c==ma[c])
                {
                    d=d-ma[c];
                    // cout<<c<<" "<<ma[c]<<" he "<<i<<" "<<d<<endl;
                    ma[c]=0;
                    s.pb(d);
                    if(de.size())
                    {
                        c = de.back().second;
                        ma[c]=de.back().first;
                        de.pop_back();
                    }
                    else
                    {
                        if(i+1<n)
                        {
                            i++;
                            d++;
                            c = v[i];
                            ma[c] = 1;
                            s.pb(d);
                        }
                    }
                    //cout<<i<<" "<<c<<" "<<ma[c]<<endl;
                }
                else s.pb(d);
            }
            else d++,de.pb({ma[c],c}),ma[c]=0,c=v[i],ma[c]++,s.pb(d);
            // cout<<d<<" "<<i<<endl;
        }
        for(i=0; i<n; i++)cout<<s[i]<<endl;
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
