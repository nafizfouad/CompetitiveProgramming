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
    vector< pair<pair<ll,ll>,ll > > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll> > me;
    map<pair<ll,ll>,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c>>a>>b>>d;
        cin>>st;
        e = 0;
        for(j=0;j<c;j++){
            if(st[j]=='0'){
                e = e+min(a,b+d);
            }
            else if(st[j]=='1'){
                e = e+min(b,a+d);
            }
        }
        cout<<e<<endl;
        st.clear();
    }

}
