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
    vector<ll > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll > > mm;
    map<ll, ll> ta,ma,pa,sa;
    priority_queue<pair<ll,ll> > dq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> sta,pta;
    list<ll> di,li;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    c = 0;
    d = -1e18;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
        d = max(d,a);
        c = c+a;
    }
    k = d;
    while(1){
            e = 0;
        for(i=0;i<n;i++){
            e = e+(k-v[i]);
        }
        if(e<=c)k++;
        else {cout<<k<<endl;break;}
    }
}


