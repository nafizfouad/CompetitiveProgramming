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
#define endl '\n'
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,vv,hh,v;
vector<pair<ll,ll> > ss,pp;
map<ll,char > ta,pa,sa,ma;
map<ll, set<string> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li[225];
newset si;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>st;

        c= 0;
        d = 0;
        f= 0;
        for(i=0; i<n; i++)
        {
           if(st[i]=='0'){
                d = i;
            while(st[i]=='0'){
                i++;
                if(i==n)break;
            }
            i--;
            ss.pb({d,i});
            if(i-d>0)v.pb(ss.size()-1);
           }
           else if(st[i]=='1'){
                d = i;
            while(st[i]=='1'){
                i++;
                if(i==n)break;
            }
            i--;
            ss.pb({d,i});
            if(i-d>0)v.pb(ss.size()-1);
           }
        }
        j = 0;
        c = 0;
        for(i=0;i<ss.size();i++){


           if(j<v.size()){
           a = ss[v[j]].second;
           b= ss[v[j]].first;
           if(a>b)ss[v[j]].second--,a--;

           if(i==v[j] || a==b)j++;}
           else i++;
           c++;
        }
        cout<<c<<endl;
        v.clear();
        ss.clear();
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
