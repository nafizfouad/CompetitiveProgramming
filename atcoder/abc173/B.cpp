#include<iostream>
#include<string>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
//    vector<ll > v,s,vv;
//    vector<string> vs;
//    map<ll,ll> sa,ta,ma;
//    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
//    deque<ll> de;
//    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    for(i=0;i<n;i++){
        cin>>st;
        if(st[0]=='A')c++;
        else if(st[0]=='W')d++;
        else if(st[0]=='T')f++;
        else if(st[0]=='R')e++;
    }
    cout<<"AC x "<<c<<endl<<"WA x "<<d<<endl<<"TLE x "<<f<<endl<<"RE x "<<e<<endl;
}
