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
    map<ll,ll> ma,ta;
    map<string,ll> sa;
    map<ll,ll> pa;
    set<ll> se,pe,me;
    ll vv,v[10][10];
    vector<ll> s;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>v[i][j];
        }
    }
    a = v[1][2]+v[1][3];
    b = v[2][1]+v[2][3];
    c = v[3][1]+v[3][2];
    s.push_back(a);
    s.push_back(b);
    s.push_back(c);
    sort(s.begin(),s.end());
    d = s[1]/2;
    s[0] = s[0]-d;
    s[1] = s[1]-d;
    s[2] = s[2]-d;
    if(a>=b && a>=c)
    {
        v[1][1] = s[0];
        if(b>=c){v[2][2]=s[1];v[3][3]=s[2];}
       else{v[2][2]=s[2];v[3][3]=s[1];}
    }
    else if(b>=a && b>=c)
    {
        v[2][2] = s[0];
        if(a>=c){v[1][1]=s[1];v[3][3]=s[2];}
       else{v[1][1]=s[2];v[3][3]=s[1];}
    }
    else
    {
        v[3][3] = s[0];
        if(a>=b){v[1][1]=s[1];v[2][2]=s[2];}
       else{v[1][1]=s[2];v[2][2]=s[1];}
    }
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
