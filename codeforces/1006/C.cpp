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
int main()
{

    fast();
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
    ld bb,cc,aa;
    string st,et,ft;
    priority_queue<ll,vector<ll>,greater<ll> > pq,aq,dq;
    map<ll,ll> ma,ta;
    map<ll,ll >sa;
    set<ll> se,pe,me;
    vector<ll> vv,v,s,ss;
    cin>>n;
    c = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    d =0;
    for(i=n-1,j=0; j<i; j++,i--)
    {
        d = d+v[j];
        c = c+v[i];
     // cout<<c<<" "<<d<<" "<<j<<endl;
        if(c==d)
        {
            s.pb(c);
        }
        else if(c<d)
        {
            while(c<d && j<i)
            {
                i--;
                c = c+v[i];
               // cout<<c<<" "<<i<<endl;
                if(c==d){s.pb(c);break;}
                if(i==j+1)break;
            }
            if(i!=j+1 && c!=d){c = c-v[i];i++;}
           // cout<<c<<" "<<i<<" "<<j<<endl;
        }
        else
        {
            while(d<c && j<i)
            {
                j++;
                d = d+v[j];
                if(c==d){s.pb(d);break;}
                if(i==j+1)break;
            }
            if(i!=j+1 && c!=d){d = d-v[j];j--;}
        }
       // cout<<i<<" "<<j<<endl;

    }
   if(s.size()>0) sort(s.begin(),s.end());
   else s.pb(0);

    cout<<s[s.size()-1]<<endl;
}
