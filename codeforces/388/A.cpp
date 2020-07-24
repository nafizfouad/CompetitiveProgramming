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
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
            p =0;
        for(j=0;j<n;j++){
            if(v[j]>=p && v[j]!=-1){
                v[j]=-1;
                p++;
            }
        }
        if(p==0)break;
    }
    cout<<i<<endl;
}
