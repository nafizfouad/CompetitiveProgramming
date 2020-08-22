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
    vector<ll > v,s,vv;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n>>k;
    cin>>a>>b;
    c = 0;
    if(k==1){
        b = n-1;
        b = b*a;
        cout<<b<<endl;
        return 0;
    }
    while(1)
    {
        if(n<=1)break;
        if(n%k==0)
        {
            f = n/k;
            g = (n-f)*a;
            if(g<=b)c=c+g;
            else c= c+b;
            n= f;
            if(n==1)break;
        }
        else if(n<k){
            d = n-1;
            c = c+(d*a);
            break;
        }
        else
        {   d = n%k;
            c = c+(d*a);
            n = n-d;
            if(n==1)break;
        }
        if(n<=1)break;
    }
    cout<<c<<endl;
}
