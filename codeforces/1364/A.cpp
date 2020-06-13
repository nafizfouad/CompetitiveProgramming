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
    
    vector<ll > vv,v,s,ss;

    c = 0;
    d = 0;
    e = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        c = 0;
        m = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
             c= c+a;
             m++;
        }

        d = c;
        e =m;
        for(i=0; i<n; i++)
        {
            if(c%x!=0){
                s.pb(m);
            }
            else {
                c = c-v[i];
                m--;
            }
        }
        c = d;
        m = e;
         for(i=n-1; i>=0; i--)
        {
            if(c%x!=0){
                s.pb(m);
            }
            else {
                c = c-v[i];
                m--;
            }
        }
        sort(s.begin(),s.end());
        
        if(s.size()==0)cout<<-1<<endl;
        else cout<<s[s.size()-1]<<endl;
        v.clear();
        s.clear();
    }

}
