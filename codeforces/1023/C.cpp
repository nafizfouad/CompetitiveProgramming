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
    d = 0;
    e = 0;

    cin>>n>>m;
    cin>>st;

    if(n==m)cout<<st<<endl;
    else
    {
        c = 0;
        m = m/2;
        a = m;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='(' && m>0){
                et.pb(st[i]);
                m--;
                d++;
                if(m==0)break;
               }
               else if(st[i]==')' && c<a && c<d){
                et.pb(st[i]);
                c++;
               }
        }
        for(i=st.size()-1;i>=0 && c<a;i--){
            if(st[i]==')'){et.pb(st[i]);c++;}
        }
        cout<<et<<endl;
    }


}
