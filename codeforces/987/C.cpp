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
    map<pair<string,ll >,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    
     cin>>n;
     for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
     }
     for(i=0;i<n;i++){
        cin>>a;
        s.pb(a);
     }
     for(i=0;i<n;i++){
            d = 99999999999999;
        for(j=0;j<i;j++){
            if(v[j]<v[i]){
                if(s[j]<d){
                    d= s[j];
                }
            }
        }
        e = 99999999999999999;
         for(j=n-1;j>i;j--){
            if(v[j]>v[i]){
                if(s[j]<e){
                    e = s[j];
                }
            }
         }
         if(e!=99999999999999999 && d!=99999999999999){
            vv.pb(e+d+s[i]);
         }
     }
     if(vv.size()>0){
     sort(vv.begin(),vv.end());
     cout<<vv[0]<<endl;}
     else cout<<-1<<endl;

}
