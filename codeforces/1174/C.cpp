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
    c = 2;
    b = 0;
    m =0;
    p = 0;
    for(i=2; i<=n; i++)
    {
        if(i%2==0)v.pb(1);
        else
        {   f =0;
            for(j=2; j*j<=i; j++) {

                if(i%j==0){
                        f = 1;
                    f = 1;
                    v.pb(ma[j]);
                    ma[i] = ma[j];
                    break;
                }
            }
            if(f==0){v.pb(c);ma[i]=c;c++;}
        }
    }
    for(i=0; i<v.size(); i++)cout<<v[i]<<" ";
}

