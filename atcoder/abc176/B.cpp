#include<iostream>
#include<string>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
//    vector<ll > v,s,vv;
//    map<ll, ll > ta,pa,sa,ma;
//    map<ll,vector<ll>  > me;
//    priority_queue<ll > aq,tq,pq,nq,mq,xq;
  string st,et,ft,pt,ct;
//    deque<ll> de,ne;
//    set<ll> li;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>st;
    c = 0;
    for(i=0;i<st.size();i++){
        c = c+st[i]-'0';
    }
    if(c%9==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
