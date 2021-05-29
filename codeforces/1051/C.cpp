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
vector< pair<pair<ll,ll>, ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,char >se,me;
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
        cin>>n;
        d = -1;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            ma[a]++;
            if(ma[a]>2)d=a;
        }
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            if((*it).second==1)
            {
                s.pb((*it).first);
            }
        }
        c = s.size()/2;
        e = 0;
        for(i=0; i<s.size(); i++)
        {
            e++;
            if(e<=c)se[s[i]]='A';
            else se[s[i]]='B';
        }
        if(s.size()%2==1 && d==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0; i<v.size(); i++)
            {
                if(ma[v[i]]==1)cout<<se[v[i]];
                else if(v[i]==d && s.size()%2==1)cout<<'A',d=-1;
                else cout<<'B';
            }
            cout<<endl;
        }
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
