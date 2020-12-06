#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,e;
    vector<ll > v,s,vv,tt;
    vector<ll> ss,pp;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        cin>>st;
        p = 0;
        for(j=0;j<n;j++){
            if(st[j]=='t')st.pb('t'),p++;
        }
        for(j=0;j<n;j++){
            if(st[j]!='t')cout<<st[j];
        }
        for(j=n,k=1;k<=p;k++,j++){
            cout<<st[j];
        }
        cout<<endl;
    }
    /// jeitar jotogula thakbe oita toto diye divide,then shob sum - kMFS
}
