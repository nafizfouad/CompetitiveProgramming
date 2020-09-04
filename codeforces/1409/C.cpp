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
    vector<ll > v,s;
    map<char,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    b = 0;
    f = 0;
    for(i=1; i<=t; i++)
    {
        cin>>n>>x>>y;
        n = n-2;
        a = abs(x-y);
        for(j=1; j<=a; j++)
        {
            if(a%j==0)
            {
                f= j-1;
                if(f==n)
                {
                    b=f;
                    break;
                }
                else if(f>n)break;
                else if(f<n)b=f;
            }
        }
        c = b+1;
        d = a/c;
        e = x;
        v.pb(x);
        for(j=1; j<=b; j++)
        {
            x = x+d;
            v.pb(x);
        }
        v.pb(y);
        n = n-b;
        if(n>0){
        while(e){
            e = e-d;
            if(e>0){
            n--;
            v.pb(e);
            if(n==0)break;}
            else break;
        }}
        if(n>0){
            while(1){
                y = y+d;
                n--;
                v.pb(y);
                if(n==0)break;
            }
        }
        sort(v.begin(),v.end());
        for(j=0;j<v.size();j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
        v.clear();
    }

}
