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
    cin>>n>>m;
    c = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    e=0;
    if(v[0]!=1){
        c = v[0]-1;
         c = (c*(c+1))/2;
         if(c<=m){
            e = e+v[0]-1;
            m = m-c;
             for(j=1;j<v[0];j++)s.pb(j);
        }
        else{
          for(j=1;;j++){
                if(j<=m){
                    e++;
                    s.pb(j);
                    m =m-j;
                }
                else break;
            }
        }

    }
   // cout<<e<<" "<<m<<endl;
    for(i=0;i+1<n && m>0;i++){
        b = v[i+1]-1;
        c = v[i];
        b = (b*(b+1))/2;
        c = (c*(c+1))/2;
        d = b-c;
        if(d<=m){
            e = e+((v[i+1]-v[i])-1);
            m = m-d;
            for(j=v[i]+1;j<v[i+1];j++)s.pb(j);
        }
        else{
            for(j=v[i]+1;j<v[i+1];j++){
                if(j<=m){
                    e++;
                    s.pb(j);
                    m =m-j;
                }
                else break;
            }
        }
    }
    if(m>0){
            //cout<<m<<endl;
      for(j=v[n-1]+1;;j++){
          //cout<<v[j]<<endl;
                if(j<=m){
                        s.pb(j);
                    e++;
                    m =m-j;
                }
                else break;
            }
    }
    cout<<e<<endl;
    for(i=0;i<s.size();i++)cout<<s[i]<<" ";
}
