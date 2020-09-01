#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s,vv;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    b = 1000000000000;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    c = 0;
    g = 99999999999999;
    sort(v.begin(),v.end());
    while(1){
        c++;
        d = 0;
        f = 0;
        for(i=0;i<n;i++){
            e = pow(c,i);
            d = d+abs(e-v[i]);
            if(e>b){f=1;break;}
        }
        if(f==1)break;
        g = min(d,g);
    }

    cout<<g<<endl;
}
