#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<iomanip>
#include<string.h>
#include<stdio.h>
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
    vector< pair<ll,ll> > ss;
    map<ll,vector<ll> > me;
    map<pair<ll,ll >,ll > pa,ta,sa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>x;
    cin>>st;
    for(i=0;i<n;i++){
        if(st[i]=='x' && x>0)x--;
        else if(st[i]=='o')x++;
    }
    cout<<x<<endl;
}

