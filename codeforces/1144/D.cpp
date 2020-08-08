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
    //vector<string> ss,vv,pp;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,vector<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
        ma[a]++;
        sa[a] = i;
    }
    c = -1;
    for(auto it = ma.begin();it!=ma.end();it++){
        a = (*it).second;
        if(a>c){
            c = a;
            b = (*it).first;
        }
    }
    cout<<n-c<<endl;
    e = sa[b];
    for(i=e;i+1<n;i++){
       if(v[i]<v[i+1]){
        cout<<2<<" "<<i+2<<" "<<i+1<<endl;
        v[i+1] = v[i];
       }
       else{
        cout<<1<<" "<<i+2<<" "<<i+1<<endl;
        v[i+1] = v[i];
       }
    }
     for(i=e;i>0;i--){
       if(v[i-1]<v[i]){
        cout<<1<<" "<<i<<" "<<i+1<<endl;
        v[i-1] = v[i];
       }
       else if(v[i-1]>v[i]){
        cout<<2<<" "<<i<<" "<<i+1<<endl;
        v[i-1] = v[i];
       }
    }
}
