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
    cin>>st;
    cin>>n;
    for(i=0; i<st.size(); i++)
    {
    if(st[i]=='*')c++;
    else if(st[i]=='?')d++;
    else e++;
    }
    if(n==e){
        for(i=0;i<st.size();i++){
            if(isalpha(st[i])){cout<<st[i];}
        }
        cout<<endl;
    }
    else if(n>e){
        b = n-e;
        f = 0;
        for(i=0;i<st.size();i++){
            if(isalpha(st[i]))et.pb(st[i]);
            else if(st[i]=='*' && i!=0 && f==0){
                for(j=1;j<=b;j++){
                    et.pb(st[i-1]);
                }
                f = 1;
            }
        }
        if(f==1)cout<<et<<endl;
        else cout<<"Impossible"<<endl;
    }
    else{
        b = e-n;
        for(i=0;i<st.size();i++){
             if(isalpha(st[i]))et.pb(st[i]);
             else if(b>0 && i>0){
                et.erase(et.end()-1);
                b--;
             }
        }
        if(b==0)cout<<et<<endl;
        else cout<<"Impossible"<<endl;
    }
}
