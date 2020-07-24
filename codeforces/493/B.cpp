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
    vector<ll > v,s,vv;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    f = 0;
    c = 0;
    d = 0;
    for(i=0;i<n;i++){
        cin>>a;
        if(a<0){v.pb(abs(a));c=c+abs(a);}
        else {s.pb(a);d=d+abs(a);}
        if(i==n-1 && a<0)f=1;
    }
    if(c==d){
      if(v==s && f==1)cout<<"second"<<endl;
      else if(v==s && f==0)cout<<"first"<<endl;
      else{
            f = 0;
        for(i=0;i<v.size()&& i<s.size();i++){
            if(v[i]>s[i]){
                f=1;break;
            }
            else if(v[i]<s[i]){
                f=2;break;
            }
        }
         if(f==1)cout<<"second"<<endl;
         else if(f==2)cout<<"first"<<endl;
         else if(f==0 && v.size()>s.size())cout<<"second"<<endl;
         else if(f==0 && v.size()<s.size())cout<<"first"<<endl;
      }
    }
    else if(c>d)cout<<"second"<<endl;
    else cout<<"first"<<endl;
}
