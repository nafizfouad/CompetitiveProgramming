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
vector<ll> v[100006],s(100005),vv(100005);
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
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
    queue <ll> q;
    q.push(a);
    vv[a] = 0;
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        q.pop();
        for(i=0; i<v[d].size(); i++)
        {
            if(s[v[d][i]]==0)
            {
                s[v[d][i]]= 1;
                q.push(v[d][i]);
                vv[v[d][i]]=(vv[d]+1)%2;
            }
            else{
                if(vv[v[d][i]]==vv[d]){f=1;break;}
            }
        }
        if(f==1)break;
    }

    return f;
}

int main()
{
    fast;
   // cin>>t;
    while(t--)
    {
        cin>>n>>m;

        for(i=0; i<m; i++)
        {
         cin>>a>>b;
          v[a].pb(b);
          v[b].pb(a);
        }
        d = 0;
        for(i=1;i<=n;i++){
            if(s[i]==0 && v[i].size()>0){
               b = bfs(i);
               if(b==1){d=1;break;}
            }
        }
        if(d==1)cout<<-1<<endl;
        else{
            for(i=1;i<=n;i++){
                if(vv[i]%2==0)ss.pb(i);
                else pp.pb(i);
            }
            cout<<ss.size()<<endl;
            for(i=0;i<ss.size();i++)cout<<ss[i]<<" ";
            cout<<endl;
            cout<<pp.size()<<endl;
            for(i=0;i<pp.size();i++)cout<<pp[i]<<" ";
            cout<<endl;
        }

    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
