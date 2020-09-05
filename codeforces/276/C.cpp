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
    vector<ll > v,s;
    map<char,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t>>n;
    ll ar[t+5],br[t+5];
    for(i=1; i<=t; i++)
    {
        cin>>ar[i];
        br[i]=0;
    }
    for(i=1;i<=n;i++){
        cin>>a>>b;
        br[a]++;
        br[b+1]--;
    }
    br[0]=0;
    ar[0] =0;
    for(i=1;i<=t;i++){
        br[i] = br[i]+br[i-1];
    }
    sort(ar,ar+t+1);
    sort(br,br+t+1);
    a = 0;
    for(i=1;i<=t;i++){
        a = a+(ar[i]*br[i]);
        //cout<<ar[i]<<" "<<br[i]<<endl;
    }
    cout<<a<<endl;
}
