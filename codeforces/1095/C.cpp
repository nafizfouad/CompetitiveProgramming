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
    map<ll,ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n>>k;
    b = n;
    while(b){
        d = b%2;
        st.pb(d+'0');
        b = b/2;
    }
    for(i=0;i<=29;i++){
        ma[i]= pow(2,i);
    }
    d = 0;
    for(i=0;i<st.size();i++){
        if(st[i]=='1'){d=d+ma[i];aq.push(ma[i]);}
    }
    if(aq.size()>k || d<k)cout<<"NO"<<endl;
    else{
            cout<<"YES"<<endl;
        while(aq.size()<k){
            b = aq.top();
            b = b/2;
            aq.pop();
            aq.push(b);
            aq.push(b);
        }
        for(i=1;i<=k;i++){
            b = aq.top();
            cout<<b<<" ";
            aq.pop();
        }
    }
}
