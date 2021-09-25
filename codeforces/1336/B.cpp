;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,vv,hh,v;
vector< pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>j>>g>>k;
        for(i=0; i<j; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<g; i++)
        {
            cin>>a;
            s.pb(a);
        }
        for(i=0; i<k; i++)
        {
            cin>>a;
            vv.pb(a);
        }
        sort(v.begin(),v.end());
        sort(s.begin(),s.end());
        sort(vv.begin(),vv.end());
        f = 4e18;
        for(i=0; i<j; i++)
        {
            auto it = lower_bound(s.begin(),s.end(),v[i]);
            auto ki = lower_bound(vv.begin(),vv.end(),v[i]);

            if(it==s.end())--it;
            if(ki==vv.end())--ki;

            l = 1e18,r = 1e18;
            l = abs((*it)-v[i]);
            p = (*it);
            if(it!=s.begin())--it,r = abs((*it)-v[i]);
            if(l<r)a=p;
            else a = (*it);

            l = 1e18,r = 1e18;
            l = abs((*ki)-v[i]);
            p = (*ki);
            if(ki!=vv.begin())--ki,r = abs((*ki)-v[i]);
            if(l<r)b=p;
            else b = (*ki);

            e = ((v[i]-a)*(v[i]-a)) + ((v[i]-b)*(v[i]-b)) + ((b-a)*(b-a));
            f = min(e,f);
        }
        for(i=0; i<g; i++)
        {
            auto it = lower_bound(v.begin(),v.end(),s[i]);
            auto ki = lower_bound(vv.begin(),vv.end(),s[i]);

            if(it==v.end())--it;
            if(ki==vv.end())--ki;

            l = 1e18,r = 1e18;
            l = abs((*it)-s[i]);
            p = (*it);
            if(it!=v.begin())--it,r = abs((*it)-s[i]);
            if(l<r)a=p;
            else a = (*it);

            l = 1e18,r = 1e18;
            l = abs((*ki)-s[i]);
            p = (*ki);
            if(ki!=vv.begin())--ki,r = abs((*ki)-s[i]);
            if(l<r)b=p;
            else b = (*ki);

            e = ((s[i]-a)*(s[i]-a)) + ((s[i]-b)*(s[i]-b)) + ((b-a)*(b-a));
            f = min(e,f);
        }
        for(i=0; i<k; i++)
        {
            auto it = lower_bound(s.begin(),s.end(),vv[i]);
            auto ki = lower_bound(v.begin(),v.end(),vv[i]);

            if(it==s.end())--it;
            if(ki==v.end())--ki;

            l = 1e18,r = 1e18;
            l = abs((*it)-vv[i]);
            p = (*it);
            if(it!=s.begin())--it,r = abs((*it)-vv[i]);
            if(l<r)a=p;
            else a = (*it);

            l = 1e18,r = 1e18;
            l = abs((*ki)-vv[i]);
            p = (*ki);
            if(ki!=v.begin())--ki,r = abs((*ki)-vv[i]);
            if(l<r)b=p;
            else b = (*ki);

            e = ((vv[i]-a)*(vv[i]-a)) + ((vv[i]-b)*(vv[i]-b)) + ((b-a)*(b-a));
            f = min(e,f);
        }
        cout<<f<<endl;
        v.clear();
        s.clear();
        vv.clear();
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
