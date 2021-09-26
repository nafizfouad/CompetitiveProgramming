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
    //cin>>t;
    while(t--)
    {
        cin>>n>>k;
        v.clear();
        s.clear();
        cin>>st;
        k--;
        f = 0;
        for(i=0,j=n-1; i<j; i++,j--)
        {
            char ch = st[i];
            char bh = st[j];

            c = 0;
            char ah = ch;
            while(ah!=bh)
            {
                ah++;
                v.pb(i);
                s.pb(j);
                c++;
                if(ah>'z')ah='a';
            }

            d = 0;
             ah = ch;
            while(ah!=bh)
            {
                ah--;
                d++;
                if(ah<'a')ah='z';
            }
           // cout<<c<<" "<<d<<endl;
            f = f+min(c,d);
        }

        c = n/2;

        if(v.size()==0){cout<<0<<endl;continue;}
        sort(s.begin(),s.end());
        if(k<c){
            a = v[0];
            b = v[v.size()-1];
            d = k-a;
            if(b<=k){cout<<f+d<<endl;continue;}
            else if(k<=a){cout<<f+b-k<<endl;continue;}
            if(b>k){
                d = d+d;
                d = d+v[v.size()-1]-k;
            }
            a = v[0];
            b = v[v.size()-1];
            e = b-k;
            if(a<k){
                e = e+e;
                e = e+k-a;
            }
            if(d<0)d=0;
            if(e<0)e=0;
            cout<<f+(min(d,e))<<endl;
        }
        else{
            a = s[0];
            b = s[s.size()-1];
            d = k-a;
            if(k<=a){cout<<f+b-k<<endl;continue;}
            else if(k>=b){cout<<f+k-a<<endl;continue;}
            if(b>k){
                d = d+d;
                d = d+s[s.size()-1]-k;
            }
            a = s[0];
            b = s[s.size()-1];
            e = b-k;
            if(a<k){
                e = e+e;
                e = e+k-a;
            }
            if(d<0)d=0;
            if(e<0)e=0;
            cout<<f+(min(d,e))<<endl;
        }
        v.clear();
        s.clear();
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
