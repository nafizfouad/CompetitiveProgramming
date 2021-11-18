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
//#define endl '\n'
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
vector<string > ss,pp;
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
 for(i=0;i<=59;i++){
        a = pow(2,i);
        v.pb(a);
    }
     cin>>t;
    while(t--)
    {
        cin>>n>>m;
        b = m;
        c = 0;
        while(b){
            b = b/2;
            c++;
        }
        a = pow(2,c-1)-1;
        b = pow(2,c)-1;
        if(b>=n && b<=m)cout<<b<<endl;
        else if(a>=n && a<=m)cout<<a<<endl;
        else{
                k = 0;
            while(1){
                k++;
                l = 0;
                r = 0;
                for(i=0;i<v.size();i++){
                     b = a+v[i];
                     if(b<n)l=b;
                     else if(b>=n && b<=m)r = b;
                     else if(b>m)break;
                }
                if(r!=0){cout<<r<<endl;break;}
                else a = l;
            }
        }
    }
}
