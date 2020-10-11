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
        v.clear();
        s.clear();
        vv.clear();
        f = 0;
        c = 0;
        d = 0;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            v.pb(a);
            if(a<=0)c=c+abs(a);
            else d=d+a;
            f = f+a;
        }
        if(f==0)cout<<"NO"<<endl;
        else{
                cout<<"YES"<<endl;
           if(c>d)sort(v.begin(),v.end());
           else sort(v.begin(),v.end(),greater<ll>());
           for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
           }
           cout<<endl;
        }
    }
    return 0;
}
