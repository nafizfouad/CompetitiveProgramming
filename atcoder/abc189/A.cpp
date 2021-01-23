#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll bigmod(ll n, ll k, ll m)
{

    ll a;
    if(k==0)return 1%m;
    a = bigmod(n,k/2,m);
    a = (a*a)%m;
    if(k%2==1)
    {
        a = (a*n)%m;
    }
    return a;
}

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
        char ch,bh,ah;
        cin>>ch>>bh>>ah;
        if(ch==bh && bh==ah)cout<<"Won"<<endl;
        else cout<<"Lost"<<endl;
    }
}
