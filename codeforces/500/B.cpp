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
vector<ll> v[306],s,vv;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
vector<ll> vi(305);
ll bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;

    q.push(a);
    ss.pb(a);
    vi[a] = 1;
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                vi[v[d][i]]= 1;
                ss.pb(v[d][i]);
                q.push(v[d][i]);
                f++;
            }
        }
        q.pop();
    }
    sort(ss.begin(),ss.end());
    for(i=0;i<ss.size();i++)vv.pb(s[ss[i]]);
    sort(vv.begin(),vv.end());
    for(i=0;i<ss.size();i++)s[ss[i]]=vv[i];
    vv.clear();
    ss.clear();
    return f;
}

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        p++;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                char ch;
                cin>>ch;
                if(ch=='1' && me[{i,j}]==0)v[i].pb(j),v[j].pb(i),me[{i,j}]++,me[{j,i}]++;
            }
        }
        for(i=0;i<n;i++){
            if(vi[i]==0 && v[i].size()!=0){
                bfs(i);
            }
        }
        for(i=0;i<n;i++)cout<<s[i]<<" ";
        cout<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
