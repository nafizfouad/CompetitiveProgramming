#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

ll vis[110][110];
ll dx[] = {-1,1,0,0,-1,-1,1,1};
ll dy[] = {0,0,-1,1,-1,1,-1,1};
ll nn,mm,ef=0;
char ar[55][55];
bool val(ll a,ll b,char ch)
{
    if(a>=0 && a<nn && b>=0 && b<mm && ar[a][b]==ch)return true;
    else return false;

}
void dfs(ll a,ll b,ll x,ll y,char ch)
{
    if(vis[a][b])
    {
        ef=1;
        return;
    }
    vis[a][b]= 1;

    for(ll i=0; i<4; i++)
    {
        ll c = a+dx[i];
        ll d = b+dy[i];
        if(val(c,d,ch)==true)
            if(c!=x || d!=y)dfs(c,d,a,b,ch);
    }
}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk;
    vector<ll > v,s;
    vector<ll >ss;
    map<char,vector<ll> > me;
    map<ll,ll> sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>nn>>mm;
    for(i=0; i<nn; i++)
    {
        for(j=0; j<mm; j++)cin>>ar[i][j];
    }
    for(i=0; i<nn; i++)
    {
        for(j=0; j<mm; j++)
        {
            if(vis[i][j]==0)dfs(i,j,-1,-1,ar[i][j]);
        }
    }
    if(ef==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
