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
vector<ll> v[200005],s,vv;
vector< pair<ll,ll> > ss,pp;
map< ll, ll >ta,pa,sa,ma;
map<ll,set<ll> >se,me,ke;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char > de,ne;
set<ll> li,si,ei,di;

//    freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

ll ar[200005],par[200006],col[200005];
ll bfs(ll a,ll x)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;

    q.push(a);
    ar[a] = 1;
    par[a] = 0;
    col[a] = 1;
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        f = 1;
        l = col[d];
        m = col[par[d]];
        for(i=0; i<v[d].size(); i++)
        {
            if(f>x)f=1;
            if(ar[v[d][i]]==0)
            {
                ar[v[d][i]]= 1;
                q.push(v[d][i]);
                par[v[d][i]]= d;
                if(f!=l && f!=m)col[v[d][i]] = f,f++;
                else
                {
                    f++;
                    if(f>x)f=1;
                    if(f!=l && f!=m)col[v[d][i]] = f,f++;
                    else
                    {
                        f++;
                        if(f>x)f=1;
                        col[v[d][i]]=f,f++;
                    }
                }
            }
        }
        q.pop();
    }

    return f;
}

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        d = 0;
        for(i=0; i+1<n; i++)
        {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
            if(v[a].size()>d)
            {
                d = v[a].size();
                e = a;
            }
            if(v[b].size()>d)
            {
                d = v[b].size();
                e = b;
            }
        }
        bfs(e,d+1);
        cout<<d+1<<endl;
        for(i=1; i<=n; i++)
        {
            cout<<col[i]<<" ";
        }
        cout<<endl;
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;


