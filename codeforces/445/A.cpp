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
    vector<string> vv,v,s,ss;

    cin>>n>>m;
    for(i=0; i<n; i++)
    {
      cin>>st;
      v.push_back(st);
    }
    for(i=0; i<n; i++)
    {
        for(j=0;j<m;j++){
            if(v[i][j]=='.'){
                if(i%2==0 && j%2==0)cout<<"B";
                if(i%2==0 && j%2==1)cout<<"W";
                if(i%2==1 && j%2==0)cout<<"W";
                if(i%2==1 && j%2==1)cout<<"B";
            }
            else cout<<v[i][j];
        }
        cout<<endl;
    }
}
