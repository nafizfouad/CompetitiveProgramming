#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    vector<ll > v,s,vv;
    vector<ll> aa;
    map<ll,ll> ma,sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll,vector<ll>,greater<ll> > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>b>>d>>m;
    if(b==d && d==m)cout<<0<<endl;
    else{
        c = max(b,d);
        c = max(c,m);
        if(c==b && c==d){
            n = b-m;
            cout<<n-1<<endl;
        }
        else if(c==b && c==m){
            n = b-d;
            cout<<n-1<<endl;
        }
        else if(c==d && c==m){
            n = d-b;
            cout<<n-1<<endl;
        }
        else if(c==b){
            b--;
            cout<<(b-m)+(b-d)<<endl;
        }
        else if(c==d){
            d--;
            cout<<(d-m)+(d-b)<<endl;
        }
        else if(c==m){
            m--;
            cout<<(m-d)+(m-b)<<endl;
        }
    }

}
