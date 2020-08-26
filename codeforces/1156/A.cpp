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
    vector<ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    //map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        v.pb(n);
    }
    f = 0;
    for(i=0;i+1<t;i++){
        if(v[i]==2 && v[i+1]==3 || v[i]==3 && v[i+1]==2)f=1;
    }
    if(f==1)cout<<"Infinite"<<endl;
    else{
            cout<<"Finite"<<endl;
            c = 0;
        for(i=t-1;i>0;i--){
            if(v[i]==3 && v[i-1]==1)c = c+4;
            else if(v[i]==2 && v[i-1]==1)c = c+3;
            else if(v[i]==1 && v[i-1]==2)c = c+3;
            else if(v[i]==1 && v[i-1]==3)c = c+4;
        }
        for(i=0;i+2<t;i++){
            if(v[i]==3 && v[i+1]==1  && v[i+2]==2)c--;
        }
        cout<<c<<endl;
    }
}
