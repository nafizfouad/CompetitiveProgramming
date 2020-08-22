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
    vector<ll > v,s;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    for(i=1; i<=n; i++)
    {
        ll a1,a0,a2,b1,b0,b2;
        cin>>a0>>a1>>a2;
        cin>>b0>>b1>>b2;
        c = 0;
        if(b2>a0)
        {
            b2=b2-a0;
            a0=0;
        }
        else
        {
           
            a0=a0-b2; b2=0;
        }
        c = c+(2*min(a2,b1));
        if(a2>b1)
        {
            a2=a2-b1;
            b1=0;
        }
        else
        {
            
             b1 = b1-a2; a2 = 0;
        }
        if(a2>b2)
        {
            a2=a2-b2;
            b2=0;
        }
        else
        {
             
             b2 = b2-a2;a2 = 0;
        }
        if(a1>b1)
        {
            a1=a1-b1;
            b1 = 0;
        }
        else
        {
             
             b1 = b1-a1;a1 = 0;
        }
        if(a1>b0)
        {
            a1=a1-b0;
            b0 = 0;
        }
        else
        {
            
             b0 = b0-a1; a1 = 0;
        }
        c=c-((min(a1,b2))*2);
        cout<<c<<endl;
    }

}