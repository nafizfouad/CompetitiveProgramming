#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z;
    ld aa,bb,cc;
    vector<ll > v,s;
    vector<ll> vv;
    vector<string> vs;
    map<ll,ll> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c = 0;
    b = 0;
    m =0;
    p = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(i>0){
            b = __gcd(b,a);
        }
        if(i==0)b = a;
    }
    for(i=1;i*i<=b;i++){
        if(b%i==0){
            c = c+2;
            if((b/i)==i)c--;
        }
    }
    cout<<c<<endl;
}

