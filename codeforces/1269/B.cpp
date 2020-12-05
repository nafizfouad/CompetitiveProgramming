#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,e;
    vector<ll > v,s,vv,tt;
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


    cin>>n>>x;
    f = 0;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    for(i=0;i<n;i++){
        cin>>a;
        s.pb(a);
    }
    sort(s.begin(),s.end());
    d = s[n-1];
    for(i=0;i<n;i++){
        if(v[i]<=d){
            vv.pb(d-v[i]);
        }
        else vv.pb((x+d)-v[i]);
    }
    sort(vv.begin(),vv.end());
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            tt.pb((v[j]+vv[i])%x);
        }
        sort(tt.begin(),tt.end());
        if(tt==s){cout<<vv[i]<<endl;break;}
        tt.clear();
    }
}
