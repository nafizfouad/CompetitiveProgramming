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

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s;
vector<pair<ll,ll> > vv,ss;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll> me,he,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

char ch[110][110];
ll vis[110][110];
ll dx[] = {-1,1,0,0,-1,-1,1,1};
ll dy[] = {0,0,-1,1,-1,1,-1,1};

bool val(ll c,ll d,ll n,ll m)
{
    return (c>=0 && c<n && d>=0 && d<m && vis[c][d]==0);
}

void dfs(ll a,ll b,ll n,ll m)
{

    if(vis[a][b])return;
    vis[a][b]= 1;
    for(ll i=0; i<4; i++)
    {
        ll c = a+dx[i];
        ll d = b+dy[i];
        if(val(c,d,n,m))
        {
            if(ch[c][d]!='1')dfs(c,d,n,m);
        }
    }

}

int main()
{
    fast;
    cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        if(n%2==0){
            b = n/2;
            if(b%2==0){cout<<b<<" "<<b/2<<" "<<b/2<<endl;}
            else cout<<b-1<<" "<<b-1<<" "<<2<<endl;
        }
        else{
            b = n/2;
            cout<<1<<" "<<b<<" "<<b<<endl;
        }
    }
}
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
