#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u;
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
        cin>>n>>m;
        c = 0;
        f = 0;
        d = -1;
        for(i=0;i<n;i++){
            cin>>a>>b;
            e = (a*b);
            c = c+e;
            if(c>m*100 && f==0)d=i+1,f=1;
        }
        cout<<d<<endl;
    }
}
