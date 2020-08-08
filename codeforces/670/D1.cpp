#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    vector<string> ss,vv,pp;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,list<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0; i<n; i++)
    {
        cin>>a;
        s.pb(a);
    }
    for(j=1; k>0; j++)
    {
        for(i=0; i<n; i++)
        {
            if(s[i]<v[i]){
               k = k-(v[i]-s[i]);
               s[i]=0;
            }
            else s[i]=s[i]-v[i];
        }
        if(k<=0)break;
    }
    if(k<0)cout<<j-1<<endl;
    else cout<<j<<endl;
}
