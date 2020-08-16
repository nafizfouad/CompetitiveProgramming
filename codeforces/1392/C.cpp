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
    while(t--)
    {
        cin>>n;
        v.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        c = -999999999;
        f = 0;
        d = -1;
        for(i=0; i+1<n; i++)
        {
            if(v[i]<c)
            {
                if(d==0){
                    f = f+(c-v[i]);
                    d = 1;
                }
                if(v[i]>v[i+1])
                {
                    f = f+v[i]-v[i+1];
                }
            }
            else if(v[i]>=c){
                c = v[i];
                d  = 0;
            }
        }
        if(n>=2){
        if(c==v[n-2] && v[n-1]<v[n-2]){
            f = f+(v[n-2]-v[n-1]);
        }}
        cout<<f<<endl;
    }
}
