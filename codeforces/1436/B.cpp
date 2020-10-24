#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;


int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<pair<ll,ll> ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    while(t--)
    {
        cin>>n;
        a = 0;b = 1;
        for(i=0;i+1<n;i++){
            for(j=0;j<n;j++){
                if(j==a || j==b)cout<<1<<" ";
                else cout<<0<<" ";
            }
            cout<<endl;
            a++;b++;
        }
        for(i=0;i<n;i++){
            if(i==0 || i==n-1)cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}


