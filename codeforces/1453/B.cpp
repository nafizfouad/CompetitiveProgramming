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
    vector<ll > v,s,vv;
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
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        f = -1e18;
        f = max(f,abs(v[0]-v[1]));
        for(i=1; i+1<n; i++)
        {
            if(v[i-1]>v[i] && v[i+1]>v[i]){
                c = (min(v[i-1],v[i+1])-v[i])*2;
                f = max(f,c);
            }
            else if(v[i-1]<v[i] && v[i+1]<v[i]){
                c = (v[i]-max(v[i-1],v[i+1]))*2;
                f = max(f,c);
            }
        }
        f = max(f,abs(v[n-1]-v[n-2]));
        c = 0;
        for(i=0;i+1<n;i++){
            c = c+abs(v[i]-v[i+1]);
        }
        cout<<c-f<<endl;
        ma.clear();
        v.clear();
    }
}
