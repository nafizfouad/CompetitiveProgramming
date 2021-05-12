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
map<ll,char > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

bool isprime[44800];

void sive()
{
    int i,sqt,j;
    isprime[0]=isprime[1]=true;
    for(i=2; i*i<= 44750; i++)
    {
        if(isprime[i]==false)
        {
            for(j=2*i; j<=44750; j+=i)
                isprime[j]=true;
        }
    }
    for(i=2; i<=44750; i++)
    {
        if(isprime[i]==false)v.pb(i);
    }
}

int main()
{
    fast;
    //cin>>t;
    p = 0;
    sive();
    //cout<<v.size()<<endl;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            if(a>b)swap(a,b);
            se[{a,b}]++;
            if(se[{a,b}]==1){
            ss.pb({a,b});}
        }
        a = ss[0].first;
        b = ss[0].second;
        for(i=0;i<v.size() && v[i]*v[i]<=a;i++){
            if(a%v[i]==0){
                while(a%v[i]==0){
                    a = a/v[i];
                }
                si.insert(v[i]);
            }
        }
        if(a>1)si.insert(a);
        a = b;
        for(i=0;i<v.size() && v[i]*v[i]<=a;i++){
            if(a%v[i]==0){
                while(a%v[i]==0){
                    a = a/v[i];
                }
                si.insert(v[i]);
            }
        }
        if(a>1)si.insert(a);
        f = -1;
        for(auto it = si.begin();it!=si.end();it++){
            a = (*it);
            c = 0;
            for(i=0;i<ss.size();i++){
                if(ss[i].first%a==0 || ss[i].second%a==0)c++;
            }
            if(c==ss.size()){f=a;break;}
        }
        cout<<f<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
