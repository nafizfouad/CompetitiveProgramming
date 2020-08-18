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
    map<ll, ll > ta,pa,sa,ma;
    map<ll,vector<ll>  > me;
    priority_queue<ll > aq,tq,pq,nq,mq,xq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(j=0;j<n;j++){
        cin>>a;
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                while(a%i==0){
                    a = a/i;
                }
                ma[i]++;
            }
        }
        if(a>1)ma[a]++;
    }
    b=-1;
    for(auto it = ma.begin();it!=ma.end();it++){
        b = max(b,(*it).second);
    }
    if(b<=0)b=1;
    cout<<b<<endl;

}
