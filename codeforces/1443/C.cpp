#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
using namespace std;


int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    vector<pair<ll,ll> > ss;
    map<ll,pair<ll,ll> > me;
    map<ll ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        v.clear();
        s.clear();
        vv.clear();
        ss.clear();
        for(j=0;j<n;j++){
            cin>>a;
            v.pb(a);
        }
        c = 0;
        for(j=0;j<n;j++){
            cin>>a;
            s.pb(a);
            c = c+a;
        }
        vv.pb(c);
        for(j=0;j<n;j++){
            ss.pb({v[j],s[j]});
        }
        sort(ss.begin(),ss.end());
        for(j=1;j<n;j++){
            ss[j].second = ss[j].second+ss[j-1].second;
        }
        for(j=0;j<n;j++){
            c = ss[n-1].second-ss[j].second;
            d = max(c,ss[j].first);
            vv.pb(d);
        }
        sort(vv.begin(),vv.end());
        cout<<vv[0]<<endl;
    }

    /// moulik songkha diye n ke bhag diye dekhte hobe k er cheye <= kina
}



