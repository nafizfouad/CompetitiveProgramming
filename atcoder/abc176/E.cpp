#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iterator>
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
    map<ll, ll > ta,pa,sa,ma;
    map<ll, ll > :: iterator it,ki;
    map<pair<ll,ll>,ll  > me;
//    priority_queue<ll > aq,tq,pq,nq,mq,xq;
  string st,et,ft,pt,ct;
//    deque<ll> de,ne;
//    set<ll> li;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>c>>r>>m;
    for(i=0;i<m;i++){
            cin>>a>>b;
            ma[a]++;
            sa[b]++;
            me[{a,b}] = 1;
    }
    d = 0;
    for( it = ma.begin();it!=ma.end();it++){
        if(((*it).second)>d)d = (*it).second;
    }
    e = 0;
    for( it = sa.begin();it!=sa.end();it++){
        if(((*it).second)>e)e = (*it).second;
    }
    for( it = ma.begin();it!=ma.end();it++){
        if(((*it).second)==d){f = (*it).first;v.pb(f);}
    }
    for( it = sa.begin();it!=sa.end();it++){
        if(((*it).second)==e){f=(*it).first;s.pb(f);}
    }
    f = 0;
    for(i=0;i<v.size();i++){
        a = v[i];
        for(j=0;j<s.size();j++){
            b = s[j];
            if(me[{a,b}]==0){f=1;break;}
        }
    }
    if(f==0)cout<<d+e-1<<endl;
    else cout<<d+e<<endl;
}
