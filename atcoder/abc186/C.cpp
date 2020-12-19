#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<set>
#include<string.h>
#include<stdio.h>
#include<math.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o,mi;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    c = 0;
    for(i=1,o=1;i<=n;i++,o++){
        a = 0;
        b = 0;
        l = i;
        r = o;
        while(l){
            e = l%10;
            if(e==7)a=1;
            l =l/10;
        }
        while(r){
            g = r%10;
            if(g==7)b=1;
            r =r/10;
        }
        if(a==0 && b==0){
            c++;
        }
        e = o;
        d = 0;
        while(e%10==7){
            d++;
            e = e/10;
        }
        g = 0;
        for(k=1;k<=d;k++){
            g = g*10+2;
        }
        if(g>0)o = o+g;
    }
    cout<<c<<endl;
}
