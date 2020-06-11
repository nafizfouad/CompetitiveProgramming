#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define fo(i0n) for(i=0;i<n;i++)
#define fo(i1n) for(i=1;i<=n;i++)
#define fo(j0n) for(j=0;j<n;j++)
#define fo(j1n) for(j=1;j<=n;j++)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main()
{
    fast();
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
    ld bb,cc,aa;
    string st,et,ft;
    priority_queue<ll > pq,aq,dq;
    
    c = 0;
    d = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        l = 1;
        r = n;
        f = 0;
        c = 0;
         d = 0;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            if(a<=x && b>=x && f==0){
                l = a;
                r = b;
                f = 1;
            }
            else if(a<l && b>=l && b<=r && f==1){
                l = a;
            }
            else if(a>=l && a<=r && b>r && f==1){
                r = b;
            }
            else if(a<l && b>r && f==1){
              l = a;
                r = b;
            }
        }
        if(f==1)cout<<(r-l)+1<<endl;
        else cout<<1<<endl;
    }
}
