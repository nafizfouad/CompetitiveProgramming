#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk;
    vector<ll > v,s;
    vector<ll >ss;
    map<char,vector<ll> > me;
    map<ll,ll> sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    if(n<=2)cout<<-1<<endl;
    else if(n==4)cout<<3<<" "<<5<<endl;
    else
    {
      if(n%2==1){
       n= n*n;
       b = n/2;
       cout<<b<<" "<<b+1<<endl;
      }
      else{
        c = n/2;
        cout<<c*c-1<<" "<<c*c+1<<endl;
      }
    }
}
