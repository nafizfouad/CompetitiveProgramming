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
vector<ll> v,s,heh;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
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
        a = n;
        while(a)
        {
            v.pb(a%10);
            s.pb(a%10);
            a = a/10;
        }
        reverse(v.begin(),v.end());
        f = -1e18;
        do
        {
                i = 0;
                while(i<(v.size()))
                {
                    c = 0;
                    e = 0;
                    for(j=0; j<=i; j++)
                    {
                      c = c*10+v[j];
                      e++;
                    }
                    d = 0;
                    g = 0;
                    for(j=i+1;j<v.size();j++){
                        d = d*10+v[j];
                        g++;
                    }
                    l = 0;
                    r = 0;
                    x = c;
                    y = d;
                    while(x){
                        l++;
                        x = x/10;
                    }
                    while(y){
                        r++;
                        y = y/10;
                    }
                    if(l==e && r==g && c>0 && d>0)f = max(f,c*d);
                    i++;
                }
        }
        while(next_permutation(v.begin(),v.end()));
        do
        {
                i = 0;
                while(i<(s.size()))
                {
                    c = 0;
                    e = 0;
                    for(j=0; j<=i; j++)
                    {
                      c = c*10+s[j];
                      e++;
                    }
                    d = 0;
                    g = 0;
                    for(j=i+1;j<s.size();j++){
                        d = d*10+s[j];
                        g++;
                    }
                    l = 0;
                    r = 0;
                    x = c;
                    y = d;
                    while(x){
                        l++;
                        x = x/10;
                    }
                    while(y){
                        r++;
                        y = y/10;
                    }
                    if(l==e && r==g && c>0 && d>0)f = max(f,c*d);
                    i++;
                }
        }
        while(next_permutation(s.begin(),s.end()));
        cout<<f<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
