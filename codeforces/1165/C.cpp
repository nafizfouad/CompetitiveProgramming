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
    cin>>st;
    c = 0;
    b = 0;
    m =0;
    p = 0;
    for(i=0; i+1<n; i++)
    {
        if(st[i]==st[i+1] && i%2==0 && p==0){
            p = 1;
            c++;
        }
        else if(st[i]==st[i+1] && i%2==1 && p==1){
            p = 0;
            c++;
        }
        else {
            et.push_back(st[i]);
        }
    }
    et.pb(st[n-1]);
    if(et.size()%2==1){c++;et.erase(--et.end());}
    cout<<c<<endl;
    cout<<et<<endl;
}

