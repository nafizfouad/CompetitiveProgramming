#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
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
int main()
{
    fast();
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
    ld bb,cc,aa;
    string st,et,ft;
    priority_queue<ll > pq,aq,dq;
    map<ll,ll> ma,ta,sa;
    set<ll> se,pe,me;
    vector<pair<ll,ll> > vv,v,s,ss;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        v.pb({0,0});
        for(i=1; i<=n; i++)
        {
            cin>>a;
            v.pb({a,i});
        }
        sort(v.begin(),v.end());
        for(i=0; i<m; i++)
        {
            cin>>a;
            ma[a]=1;
        }
        f = 0;
        for(i=1; i<=n; i++)
        {
            b = v[i].second;
            //cout<<i<<" "<<b<<endl;
            if(i>b)
            {
                f = 0;
                for(j=b; j<i; j++)
                {
                    if(ma[j]==1)continue;
                    else
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1){break;}
            }
            else if(i<b)
            {
                f = 0;
                for(j=b-1; j>=i; j--)
                {
                    if(ma[j]==1)continue;
                    else
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1){break;}
            }
        }
        if(f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        v.clear();
        ma.clear();
    }

}
