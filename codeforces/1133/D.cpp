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
    map<ld,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    for(i=0;i<n;i++){
        cin>>a;
        s.pb(a);
    }
    f = 0;
    c = 0;
    for(i=0;i<n;i++){
        if(v[i]!=0){aa = ((-s[i])*1.0)/v[i]*1.0; ma[aa]++;f = max(f,ma[aa]);}
        else if(s[i]==0)c++;
    }
    cout<<f+c<<endl;
}
