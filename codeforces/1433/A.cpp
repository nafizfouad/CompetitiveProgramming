#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--){
        cin>>a;
        b = a%10;
        c = (b-1)*10;
        d = 0;
        while(a){
            d++;
            a=a/10;
        }
        if(d==1)c++;
        else if(d==2)c=c+3;
        else if(d==3)c=c+6;
        else c=c+10;
        cout<<c<<endl;
    }
}