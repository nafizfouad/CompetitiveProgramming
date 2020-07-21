#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,vv;
    vector<ll> s[1010];
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    // 12 1 10 8
    cin>>t;
    while(t--){
        cin>>n>>m;
        ma.clear();
        for(i=0;i<n;i++){
            cin>>a;
            ma[a] = 1;
        }
        f = 0;
        for(i=0;i<m;i++){
            cin>>a;
            if(ma[a]==1){d=a;f=1;}
        }
        if(f==0)cout<<"NO"<<endl;
        else if(f==1)cout<<"YES"<<endl<<1<<" "<<d<<endl;
    }

}
