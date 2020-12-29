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
    v.pb(0);
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0;i+1<v.size();i++){
        vv.pb(v[i]-v[i+1]);
    }
    for(i=0;i<vv.size();i++){

        f = 0;
        for(j=i+1,p=0;j<vv.size();p++,j++){
            if(vv[j]!=vv[p]){f=1;break;}
            if(p==i)p=-1;
        }
        if(f==0)s.pb(i+1);
    }
    cout<<s.size()<<endl;
    for(i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}
