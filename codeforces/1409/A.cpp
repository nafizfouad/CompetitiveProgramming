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

    cin>>n;
    b = 0;
    f = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
         c= abs(b-a);
         if(c==0)cout<<0<<endl;
         else if(c<=10)cout<<1<<endl;
         else{
            d = c/10;
            e = c%10;
            if(e!=0)e=1;
            cout<<d+e<<endl;
         }
    }


}
