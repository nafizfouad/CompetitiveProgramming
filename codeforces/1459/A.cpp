#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,e,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,pp,xx,yy,zz;
    vector<ll > v,s,vv,tt;
    vector<ll> ss;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
      cin>>n;
      cin>>st;
      cin>>et;
      c = 0;
      d = 0;
      e = 0;
      for(i=0;i<n;i++){
        if(st[i]>et[i])c++;
        else if(st[i]<et[i])d++;
      }
      if(c>d)cout<<"RED"<<endl;
      else if(c<d)cout<<"BLUE"<<endl;
      else cout<<"EQUAL"<<endl;
    }
}
