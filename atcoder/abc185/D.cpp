#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<set>
#include<string.h>
#include<stdio.h>
#include<math.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o,mi;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a;
        v.pb(a);
    }

    d = 1;
    if(m==0){d=1;goto xx;}
    if(m==n){d=0; goto xx;}
    sort(v.begin(),v.end());
    if(m==1){
        a = v[i]-0;
        a--;
        s.pb(a);
        a = (n+1)-v[i];
            a--;
            s.pb(a);
    }
    for(i=0; i<m; i++)
    {
        if(i==0)
        {
            a = v[i]-0;
            a--;
            s.pb(a);
            a = v[1]-v[0];
            a--;
            s.pb(a);
        }
        else if(i==m-1)
        {
            a = (n+1)-v[i];
            a--;
            s.pb(a);
        }
        else
        {
            a = v[i+1]-v[i];
            a--;
            s.pb(a);
        }
    }
    c = s[0];
    mi= 1e18;
    for(i=0;i<s.size();i++){
        c = __gcd(c,s[i]);
        if(s[i]!=0)mi = min(mi,s[i]);
    }
    d = 0;
    e = 0;
    f = 0;
    for(i=0;i<s.size();i++){
        d = d+s[i]/c;
        e = e+s[i]/(mi);
        if(s[i]%mi!=0)e++;
        if(s[i]==1)f=1;
    }
    if(f==1)cout<<d<<endl;
    else cout<<min(d,e)<<endl;
    return 0;
    xx :
        cout<<d<<endl;
}
