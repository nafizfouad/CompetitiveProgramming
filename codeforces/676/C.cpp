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

        cin>>n>>k;
        cin>>st;
        b = 0;
        c = 0;
        ll ar[100005],br[100005];

        for(i=0;i<st.size();i++){
            if(st[i]=='a'){b++;ar[b]=i;}
            else {c++;br[c]=i;}
            v.pb(b);
            s.pb(c);
        }
        //cout<<b<<" "<<c<<endl;
        if(b<=k){cout<<n<<endl;return 0;}
        if(c<=k){cout<<n<<endl;return 0;}
        c = -999999;
        for(i=0;i<n;i++){
            if(s[i]>=k && st[i]=='a'){
                a=  v[i]+k;
                b = s[i]-k;
                if(b!=0){
                        e = br[b];
                    a = a-v[e];
                }
                c = max(a,c);
            }
        }
        if(c<=0)c=n;
        for(i=0;i<n;i++){
            if(v[i]>=k && st[i]=='b'){
                a=  s[i]+k;
                b = v[i]-k;
                if(b!=0){
                        e = ar[b];
                    a = a-s[e];
                }
                c = max(a,c);
            }
        }
        if(c<=0)c=n;
        cout<<c<<endl;
}
