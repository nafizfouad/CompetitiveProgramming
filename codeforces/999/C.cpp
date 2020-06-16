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
    map<char,ll> ma,ta;
    map<ll,ll >sa;
    set<ll> se,pe,me;
    vector<ll> vv,v,s,ss;
    cin>>n>>k;
    cin>>st;
    for(i=0; i<st.size(); i++)
    {
        ma[st[i]]++;
    }
    for(auto it = ma.begin(); it!=ma.end(); it++)
    {
        c= (*it).second;
        char ch = (*it).first;
        if(c<=k)
        {
            k = k-c;
            sa[ch]=2;
        }
        else{
            b = k;
            sa[ch]=1;
            break;
        }
    }
    for(i=0;i<st.size();i++){
        if(sa[st[i]]==0){
            et.pb(st[i]);
        }
        else if(sa[st[i]]==1 && b>0)b--;
        else if(sa[st[i]]==1 && b==0)et.pb(st[i]);
    }
    cout<<et<<endl;
}
