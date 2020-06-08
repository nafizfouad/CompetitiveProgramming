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
    map<string,string> ma,ta;
    map<string,ll> sa;
    map<ll,ll> pa;
    set<ll> se,pe,me;
    vector<pair<string,string> >vv,v,s;
    cin>>st>>et;
    d = 0;
    for(i=0;i<st.size();i++){
        if(st[i]!=et[i])d++;
    }
    if(d%2==0){
            c = 0;
        for(i=0;i<st.size();i++){
            if(st[i]==et[i])ft.push_back(st[i]);
            else if(c%2==0){
                ft.push_back(st[i]);
                c++;
            }
            else if(c%2==1){
                ft.push_back(et[i]);
                c++;
            }
        }
        cout<<ft<<endl;
    }
    else cout<<"impossible"<<endl;
}
