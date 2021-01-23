#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,ar[10005],br[10005];
ld aa,bb,ee,dd,ff,kk,gg;
vector<ll > v,s,vv;
vector<pair<ll,ll> > ss;
map<ll, ll > ta,pa,sa,ma;
map<ll,vector<pair<ll,ll> >  > me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        c = 0;
        f = 0;
        d = -1e18;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        e = 0;
        for(i=0; i<n; i++)
        {
            c = v[i];
            d = max(d,c);
            for(j=i+1; j<n; j++)
            {
             c = min(c,v[j]);
             d = max(d,((j-i)+1)*c);
            }
           
        }
        cout<<d<<endl;
    }
}
