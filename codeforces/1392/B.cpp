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
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    while(t--){
        cin>>n>>k;
        c = -999999999999999;
        for(i=0;i<n;i++){
            cin>>a;
             {c= max(a,c);}
             v.pb(a);
        }
        d = -99999999999999;
        for(i=0;i<n;i++){
           s.pb(c-v[i]);
            d = max(d,c-v[i]);
        }
        for(i=0;i<n;i++){
           vv.pb(d-s[i]);
        }
        if(k%2==1){
            for(i=0;i<n;i++)cout<<s[i]<<" ";
        }
        else if(k%2==0){
            for(i=0;i<n;i++)cout<<vv[i]<<" ";
        }
        cout<<endl;
        v.clear();
        vv.clear();
        s.clear();
    }
}
