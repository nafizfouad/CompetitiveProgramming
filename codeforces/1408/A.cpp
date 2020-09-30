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
    vector<ll > v,vv,s;
    vector<ll> ss,pp;
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(j=1; j<=3; j++)
        {
            for(i=1; i<=n; i++)
            {
                cin>>a;
                if(j==1)v.pb(a);
                if(j==2)s.pb(a);
                if(j==3)vv.pb(a);
            }
        }
        for(i=0;i<n;i++){
                ss.clear();
            ss.pb(v[i]);
            ss.pb(s[i]);
            ss.pb(vv[i]);
            sort(ss.begin(),ss.end());
            if(i==0)pp.pb(ss[0]);
            else if(i>0 && i<n-1){
                if(ss[0]!=pp[i-1])pp.pb(ss[0]);
                else if(ss[1]!=pp[i-1])pp.pb(ss[1]);
                else if(ss[2]!=pp[i-1])pp.pb(ss[2]);
            }
            else if(i==n-1){
                if(ss[0]!=pp[0] && ss[0]!=pp[i-1])pp.pb(ss[0]);
                else if(ss[1]!=pp[0] && ss[1]!=pp[i-1])pp.pb(ss[1]);
                else if(ss[2]!=pp[0] && ss[2]!=pp[i-1])pp.pb(ss[2]);
            }
        }
        for(i=0;i<n;i++){
            cout<<pp[i]<<" ";
        }
        cout<<endl;
        pp.clear();
        v.clear();
        s.clear();
        ss.clear();
        vv.clear();
    }

}
