#include<iostream>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
//    vector<ll > v,s,vv;
//    vector<pair<ll,ll> > sv;
//    map<ll,ll> sa,ta,ma,pa;
//    map<pair<ll,ll>, ll> mm;
//    map<pair< deque<ll>,deque<ll> >,ll  > me;
//    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
//    string st,et,ft,pt,ct;
//    deque<ll> de,pe,ne;
//    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
        cin>>a>>b>>d;
        c = 0;
        for(i=a;i<=b;i++){
            if(i%d==0)c++;
        }
        cout<<c<<endl;
}
