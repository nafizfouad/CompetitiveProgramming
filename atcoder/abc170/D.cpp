#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pii acos(-1)
#define fo(i0n) for(i=0;i<n;i++)
#define fo(i1n) for(i=1;i<=n;i++)
#define fo(j0n) for(j=0;j<n;j++)
#define fo(j1n) for(j=1;j<=n;j++)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define pf push_front
#define pu push
#define bg begin
#define en end
using namespace std;
ll ma[1000010];
int main()
{

    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
    ld bb,cc,aa;
    string st,et,ft;
    priority_queue<ll,vector<ll>,greater<ll> > pq,aq,dq;
    //map<ll,ll> ma,ta;
    map<ll,ll >sa;
    set<ll> se,pe,me;
    ll vv,v[200010],s,ss;
    // fast();

    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a);
        ma[a]++;
            v[i]=a;
    }
    c = 0;
    for(i=0; i<n; i++)
    {
        f = 0;
        for(k=2; k*k<=v[i]; k++)
        {
            if(v[i]%k==0 && (ma[k]!=0 || ma[v[i]/k]!=0))
            {
                f=1;
                break;
            }
        }
        if(f==0 && ma[v[i]]==1 && ma[1]==0)c++;
    }
    if(ma[1]==1)c++;
    printf("%lld\n",c);
}
