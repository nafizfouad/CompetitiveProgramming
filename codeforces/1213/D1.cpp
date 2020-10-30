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
    cin>>n>>k;
    c = 0;
    f = 1e18;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0; i<n; i++)
    {
        b = v[i];
        while(b)
        {
            s.pb(b);
            b = b/2;
        }
    }
    for(auto it : s)
    {
        for(i=0; i<n; i++)
        {
            d = 0;
            b = v[i];
            while(b>it)
            {
                b = b/2;
                d++;
            }
            if(b==it)vv.pb(d);
        }
        if(vv.size()>=k)
        {
            sort(vv.begin(),vv.end());
            f = min(f,accumulate(vv.begin(),vv.begin()+k,0LL));
        }
        vv.clear();
    }
    cout<<f<<endl;
}



