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
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    //map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>a>>b;
    if(b==1)cout<<"Yes"<<endl;
   else {
        f = 0;
    while(1){
        if(a%b==0){f=1;break;}
        ma[a%b]++;
        a = a+(a%b);
        if(ma[a%b]>1){f=2;break;}
    }
    if(f==1)cout<<"Yes"<<endl;
    else if(f==2)cout<<"No"<<endl;
   }
}
