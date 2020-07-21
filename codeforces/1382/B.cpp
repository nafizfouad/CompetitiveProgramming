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
        cin>>n;
        ma.clear();
        v.clear();
        c = 0;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
            if(a==1)c++;
        }
        if(c==0)cout<<"First"<<endl;
        else if(c==n && n%2==0)cout<<"Second"<<endl;
        else if(c==n && n%2==1)cout<<"First"<<endl;
        else{
                d = 0;
            for(i=0;i<n;i++){
                if(v[i]==1)d++;
                else break;
            }
            if(d%2==0)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}
