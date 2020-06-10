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
    vector<ll > vv,v,s,ss;
    c = 0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        d = min(a,b);
        d = min(d,c);
        if(d==a || d==b)cout<<d<<endl;
        else
        {
            a = a-d;
            b = b-d;
            if(a<b)swap(a,b);
            if(a/b>=2)cout<<d+b<<endl;
            else{
             d = d+(a/3);
            d = d+(b/3);
            d = d+((a%3+b%3)/3);
            cout<<d<<endl;
            }

        }
    }
}
