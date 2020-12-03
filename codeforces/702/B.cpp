#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s,vv;
    vector<ll> ss,pp;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        ma[a]++;
        if(ma[a]==1)v.pb(a);
    }
    for(i=1; i<=30; i++)
    {
        aa = pow(2,i);
        s.pb(int(aa));
    }
    e = 0;
    for(j=0; j<v.size(); j++)
    {
        for(i=0; i<s.size(); i++)
        {
            a = v[j];
            b = s[i];
            c = s[i]-v[j];
            if(a==c){
               d = ma[a];
               e = e+((d*(d-1))/2);
            }
            else if(ma[c]!=0){
                if(me[{a,c}]==0 && me[{c,a}]==0)e = e+(ma[c]*ma[a]);
                me[{a,c}]=1;
                me[{c,a}]=1;
            }
        }
    }
    cout<<e<<endl;
}
