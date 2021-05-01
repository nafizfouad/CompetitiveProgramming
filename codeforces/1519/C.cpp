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
vector<ll> v,s,vv;
vector<ll > ss[200005],pp;
map<string,ll > ta,pa,sa,ma;
vector<pair < pair<ll,ll> ,ll> > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            si.insert(a);
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            c = c+a;
            ss[v[i]].pb(a);
        }
        s.pb(c);
        for(auto it = si.begin(); it!=si.end(); it++)
        {
            a = (*it);
            sort(ss[a].begin(),ss[a].end(),greater<ll>());
            if(ss[a].size()==1)vv.pb(a);
            for(i=1; i<ss[a].size(); i++)
            {
                ss[a][i]= ss[a][i]+ss[a][i-1];
            }
        }
        for(j=0; j<vv.size(); j++)
        {
            si.erase(vv[j]);
            ss[vv[j]].clear();
        }
        for(i=2; i<=n; i++)
        {
            d = 0;
            vv.clear();
            for(auto it = si.begin(); it!=si.end(); it++)
            {
                a = (*it);
                b = ss[a].size();
                c = b%i;
                d = d+ss[a][ss[a].size()-1-c];
                if(b==i)vv.pb(a);
            }
            s.pb(d);
            for(j=0; j<vv.size(); j++)
            {
                si.erase(vv[j]);
                ss[vv[j]].clear();
            }
        }
        for(i=0; i<s.size(); i++)cout<<s[i]<<" ";
        cout<<endl;
        s.clear();
        si.clear();
        v.clear();
        vv.clear();
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

