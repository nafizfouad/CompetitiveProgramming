#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< ll> v,s,vv;
    map<char,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end(),greater<ll>());
        s.pb(v[0]);
        r = v[0];v[0] = 0;
        for(i=0;i+1<n;i++){
                c = -999999;
            for(j=0;j<n;j++){
                if(v[j]!=0){
                    b = __gcd(r,v[j]);
                    if(b>c){
                        c=b;
                        d = j;
                    }
                }
            }
            s.pb(v[d]);
            v[d] = 0;
            r = c;
        }
        for(i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
        v.clear();
        s.clear();
    }
}
