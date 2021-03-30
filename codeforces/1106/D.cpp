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
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v[100006],s(100005),vv;
vector<string> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> > me,he,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    priority_queue <ll,vector<ll>,greater<ll> > q;

    q.push(a);
    s[a] = 1;
    f = 0;
    while(q.size()>0)
    {
        d = q.top();
        q.pop();
        vv.pb(d);
        for(i=0; i<v[d].size(); i++)
        {
            if(s[v[d][i]]==0)
            {
                s[v[d][i]]= 1;
                q.push(v[d][i]);

                f++;
            }
        }

    }

    return f;
}


int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        bfs(1);
        for(i=0;i<vv.size();i++)cout<<vv[i]<<" ";
        cout<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
