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

char ch[55][55];
ll vis[55][55];
ll dx[] = {-1,1,0,0,-1,-1,1,1};
ll dy[] = {0,0,-1,1,-1,1,-1,1};

bool val(ll c,ll d,ll n,ll m)
{

    return (c>=0 && c<n && d>=0 && d<m && vis[c][d]==0);

}

void bfs(ll a,ll b,ll n,ll m)
{

    queue <pair<ll,ll> > q;
    pair<ll,ll> qu;
    q.push({a,b});
    vis[a][b]= 1;
    while(q.size()!=0)
    {
        for(ll i=0; i<4; i++)
        {
            qu = q.front();
            a = qu.first;
            b = qu.second;
            ll c = a+dx[i];
            ll d = b+dy[i];
            if(val(c,d,n,m))
            {
                if(ch[c][d]!='#')
                {
                    q.push({c,d});
                    vis[c][d]=1;
                }
            }
        }
        q.pop();
    }
}

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(vis,0,sizeof vis);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>ch[i][j];
            }
        }
        f = 0;
        e = 0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(ch[i][j]=='B')
                {
                    for(k=0; k<4; k++)
                    {
                        c = i+dx[k];
                        d = j+dy[k];
                        if(val(c,d,n,m))
                        {
                            if(ch[c][d]=='G')f=1;
                            else if(ch[c][d]!='B')ch[c][d] = '#';
                        }
                    }
                }
                else if(ch[i][j]=='G')e++;
            }
        }
        if(f==1)cout<<"No"<<endl;
        else
        {
            f = 0;
            if(ch[n-1][m-1]=='#')f=1;
            else bfs(n-1,m-1,n,m);
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    if(ch[i][j]=='G')
                    {
                     if(vis[i][j]==0){f=1;break;}
                    }
                }
            }
            if(f==1 && e>0)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
