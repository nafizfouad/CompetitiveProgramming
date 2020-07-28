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
    vector<ll > v,s;
    vector<ll> ss,vv,pp;
    map<ll,vector<ll> > mm;
    map<ll,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    c = 0;
    for(i=2; i<=9; i++)
    {
        if(i!=8 && i!=6){cout<<i<<endl;
        cin>>st;
        if(st[0]=='y')c++;}
    }
    cout<<11<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<13<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<31<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<17<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<19<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<23<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<29<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<49<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<25<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<37<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<39<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<41<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<43<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    cout<<47<<endl;
    cin>>st;
    if(st[0]=='y')c++;
    if(c>1)cout<<"composite"<<endl;
    else cout<<"prime"<<endl;
}
