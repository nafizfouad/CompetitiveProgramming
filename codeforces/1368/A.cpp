#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    ld aa,bb,cc;
    vector<ll > v,s,vv;
    map<ll,ll> ma,sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll,vector<ll>,greater<ll> > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
      cin>>n;
      while(n--){
        cin>>a>>b>>t;
        c = 0;
        while(a<=t || b<=t){
            if(a<=b){
                a = a+b;
            }
            else{
                b = b+a;
            }
            c++;
        }
        cout<<c-1<<endl;
      }
}
