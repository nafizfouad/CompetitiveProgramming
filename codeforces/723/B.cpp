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
    vector<ll >vv,v,s;
    cin>>n>>st;
    c = 0;
    d = 0;
    for(i=0; i<n; i++)
    {
        if(st[i]=='('){c=1;v.push_back(d);d=0;}
        else if(st[i]==')'){c=0;d=0;}
        else if(isalpha(st[i]) && c==0)d++;
        else
        {
            v.push_back(d);
            d = 0;
        }
    }
    v.push_back(d);
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<" ";
    c = 0;
    for(i=0; i<n; i++)
    {
        if(st[i]=='(')
        {
            while(st[i]!=')')
            {
                if(isalpha(st[i]))
                {
                    c++;
                    while(isalpha(st[i]))i++;
                }
                else
                {
                    i++;
                }
            }
        }
    }
    cout<<c<<endl;
}
