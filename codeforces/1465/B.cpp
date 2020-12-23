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
    vector<ll > v,s;
    vector<ll> ss,pp;
    map<char,ll > mm;
    map<ll, ll> sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    list<ll> di,li;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        while(1){
                v.clear();
         c= a;
         while(c){
            v.pb(c%10);
            c = c/10;
         }
         d = 0;
         for(j=0;j<v.size();j++){
            if(v[j]!=0){
                if(a%v[j]!=0)d=1;
            }
         }
         if(d==0){cout<<a<<endl;break;}
         else a++;}
    }

}
