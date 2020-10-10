#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
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
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
        ma[a]++;
    }
    m = 0;
    for(i=0;i<=200000;i++){
        if(ma[i]==0){m=i;break;}
    }
    for(i=n-1;i>=0;i--){
        s.pb(m);
        ma[v[i]]--;
        if(ma[v[i]]==0 && m>v[i]){
            m = v[i];
        }
    }
    for(i=n-1;i>=0;i--){
        cout<<s[i]<<endl;
    }
}
