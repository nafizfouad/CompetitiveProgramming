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
    vector<pair<ll,ll> > v,s;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    for(i=0;i<n;i++){
      cin>>a>>b;
      v.pb({a,b});
    }
    
    f = 2;
    for(i=1;i+1<n;i++){
        b = v[i].first;
        c = v[i].second;
        d = b-c;
        e = b+c;
        if(v[i-1].first<d){
            f++;
        }
        else {
           if(e<v[i+1].first){
            v[i].first=e;
            f++;
           }
        }
    }
    if(n==1)f=1;
    cout<<f<<endl;
}
